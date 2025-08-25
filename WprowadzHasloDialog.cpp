#include "WprowadzHasloDialog.h"
#include "ui_WprowadzHasloDialog.h"

Dialog::Dialog(QWidget* parent) :
    QDialog(parent),
    ui(new Ui::Dialog  )
{
    ui->setupUi(this);
    QString styleSheet = "QDialog { background-image: url(tlo.jpg);background-size: cover; }";
    ui->textBrowser->setStyleSheet("background: transparent;");
    ui->textBrowser_2->setStyleSheet("background: transparent;");
    ui->textBrowser_3->setStyleSheet("background: transparent;");
    ui->label->setStyleSheet("color: white;");
    ui->label_2->setStyleSheet("color: white;");
    setWindowIcon(QIcon(":/images/images/icon.png"));
    setWindowTitle("Hangman - Menu");
    setStyleSheet(styleSheet);
    connect(ui->lineEditHaslo, &QLineEdit::returnPressed, this, &Dialog::on_lineEditHaslo_returnPressed);
    connect(ui->lineEditKategoria, &QLineEdit::returnPressed, this, &Dialog::on_lineEditHaslo_returnPressed);
    ui->lineEditKategoria->setFocus();
    ui->pushButton->setFocusPolicy(Qt::NoFocus);
    ui->pushButton_2->setFocusPolicy(Qt::NoFocus);
    ui->pushButton_3->setFocusPolicy(Qt::NoFocus);
    ui->pushButton_4->setFocusPolicy(Qt::NoFocus);
    ui->pushButton_5->setFocusPolicy(Qt::NoFocus);
    ui->pushButton_6->setFocusPolicy(Qt::NoFocus);
    ui->pushButton_7->setFocusPolicy(Qt::NoFocus);
    ui->pushButton_8->setFocusPolicy(Qt::NoFocus);

    
    
    connect(ui->pushButton, &QPushButton::clicked, this, &Dialog::losujKategorieKraje);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &Dialog::losujKategorieStolice);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &Dialog::losujKategorieZwierzeta);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &Dialog::losujKategorieFilmy);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &Dialog::losujKategorieSporty);
    connect(ui->pushButton_6, &QPushButton::clicked, this, &Dialog::losujKategorieZawody);
    connect(ui->pushButton_7, &QPushButton::clicked, this, &Dialog::losujKategorieJedzenie);
    connect(ui->pushButton_8, &QPushButton::clicked, this, &Dialog::losujKategorieAuta);

    // Dodaj kraje do listy
    krajeLista << "POLSKA" << "NIEMCY" << "FRANCJA" << "WLOCHY" << "HISZPANIA" << "PORTUGALIA" << "HOLANDIA" << "SZWECJA"
        << "NORWEGIA" << "FINLANDIA" << "ROSJA" << "GRECJA" << "SZWAJCARIA" << "AUSTRIA" << "BELGIA" << "CZARNOGORA"
        << "CHORWACJA" << "SLOWACJA" << "SLOWENIA";

    stoliceLista << "WARSZAWA" << "BERLIN" << "PARYZ" << "RZYM" << "MADRYT" << "LIZBONA" << "AMSTERDAM" << "SZTOKHOLM"
        << "OSLO" << "HELSINKI" << "MOSKWA" << "ATENY" << "BERNA" << "WIEDEN" << "BRUKSELA" << "PODGORICA"
        << "ZAGRZEB" << "BRATYSLAWA" << "LJUBLJANA" << "RYGA";

    zwierzetaLista << "KOT" << "PIES" << "RYS" << "KON" << "SLON" << "ZEBRA" << "LAMA" << "WIELORYB" << "TYGRYS"
        << "KANGUR" << "GEPARD" << "NIEDZWIEDZ" << "CHAMELEON" << "PINGWIN" << "GEKON" << "ZEBU" << "KOALA"
        << "KOJOT" << "JELEN" << "WIEWIORKA";

    filmyLista << "MATRIX" << "INCEPTION" << "AVATAR" << "JAWS" << "TITANIC" << "GRAVITY" << "CASABLANCA" << "GLADIATOR"
        << "INTERSTELLAR" << "WHIPLASH" << "MEMENTO" << "DUNKIRK" << "ALIENS" << "ROCKY" << "FARGO" << "JOKER"
        << "SCREAM" << "MATRIX" << "PREDATOR" << "AMADEUS";

    sportyLista << "KOSZYKOWKA" << "SIATKOWKA" << "BIEGI" << "LYZWIASTWO"
        << "KOLARSTWO" << "PLYWANIE" << "LEKKOATLETYKA" << "TENIS"
        << "GOLF" << "NARCIARSTWO" << "ZEGLARSTWO" << "BOKS"
        << "JUDO" << "GIMNASTYKA" << "KAJAKARSTWO" << "WPINACZKA";

    zawodyLista << "LEKARZ" << "NAUCZYCIEL" << "INFORMATYK" << "KELNER" << "POLICJANT"
        << "ARCHITEKT" << "KIEROWCA" << "PIELEGNIARKA" << "SPORTOWIEC" << "PRAWNIK"
        << "DZIENNIKARZ" << "ARTYSTA" << "STRAZAK" << "PROGRAMISTA" << "INZYNIER"
        << "PSYCHOLOG" << "MECHANIK" << "FOTOGRAF" << "GRAFIK" << "SPRZATACZ";

    jedzenieLista << "PIZZA" << "SPAGHETTI" << "HAMBURGER" << "SUSHI" << "LASAGNE"
        << "KEBAB" << "PIEROGI" << "LAZANIA" << "HOTDOG" << "TOSTY"
        << "SALATKA" << "NALESNIKI" << "CIASTO" << "RYZ" << "SCHABOWY"
        << "POMIDOROWA" << "KURCZAK" << "OMLET" << "GRZYBY";

    autaLista << "TOYOTA" << "VOLKSWAGEN" << "FORD" << "BMW" << "MERCEDES"
        << "HONDA" << "AUDI" << "NISSAN" << "CHEVROLET" << "FIAT"
        << "MAZDA" << "SUBARU" << "HYUNDAI" << "KIA" << "JEEP"
        << "PEUGEOT" << "RENAULT" << "VOLVO" << "LEXUS" << "JAGUAR";

    
    
    randGen = QRandomGenerator::securelySeeded();
}

Dialog::~Dialog()
{
    
    delete ui;
}

void Dialog::on_lineEditHaslo_returnPressed()
{
    
    on_buttonOK_clicked();
}

void Dialog::closeEvent(QCloseEvent* event)
{
    emit hasloPuste();
    event->accept();
}

void Dialog::on_buttonOK_clicked()
{
    QString haslo = ui->lineEditHaslo->text().toUpper();
    QString kategoria = ui->lineEditKategoria->text();
    if (haslo.contains(' ')) {
        QMessageBox::warning(this, "Blad", "Wprowadz tylko jedno slowo (bez spacji).");
        return;
    }
    if (haslo.isEmpty()) {
        emit hasloPuste();
        return;
    }
    if (kategoria.isEmpty()) {
        emit kategoriaPuste();
        return;
    }
    
        emit hasloWprowadzone(haslo, kategoria);
        emit kategoriaWprowadzone(haslo, kategoria);

        accept();
    
        
}
void Dialog::losujKategorieKraje()
{
    QString haslo = krajeLista[randGen.bounded(krajeLista.size())];; 
    QString kategoria = "Kraje Swiata";  
    emit hasloWprowadzone(haslo, kategoria);
    emit kategoriaWprowadzone(haslo, kategoria);
    accept();
}
void Dialog::losujKategorieStolice()
{
    QString haslo = stoliceLista[randGen.bounded(stoliceLista.size())];;  
    QString kategoria = "Stolice";  
    emit hasloWprowadzone(haslo, kategoria);
    emit kategoriaWprowadzone(haslo, kategoria);
    accept();
}
void Dialog::losujKategorieZwierzeta()
{
    QString haslo = zwierzetaLista[randGen.bounded(zwierzetaLista.size())];;  
    QString kategoria = "Zwierzeta";  
    emit hasloWprowadzone(haslo, kategoria);
    emit kategoriaWprowadzone(haslo, kategoria);
    accept();
}
void Dialog::losujKategorieFilmy()
{
    QString haslo = filmyLista[randGen.bounded(filmyLista.size())];;
    QString kategoria = "Filmy";
    emit hasloWprowadzone(haslo, kategoria);
    emit kategoriaWprowadzone(haslo, kategoria);
    accept();
}
void Dialog::losujKategorieSporty()
{
    QString haslo = sportyLista[randGen.bounded(sportyLista.size())];;
    QString kategoria = "Sporty";
    emit hasloWprowadzone(haslo, kategoria);
    emit kategoriaWprowadzone(haslo, kategoria);
    accept();
}
void Dialog::losujKategorieZawody()
{
    QString haslo = zawodyLista[randGen.bounded(zawodyLista.size())];;
    QString kategoria = "Zawody";
    emit hasloWprowadzone(haslo, kategoria);
    emit kategoriaWprowadzone(haslo, kategoria);
    accept();
}
void Dialog::losujKategorieJedzenie()
{
    QString haslo = jedzenieLista[randGen.bounded(jedzenieLista.size())];;
    QString kategoria = "Jedzenie";
    emit hasloWprowadzone(haslo, kategoria);
    emit kategoriaWprowadzone(haslo, kategoria);
    accept();
}
void Dialog::losujKategorieAuta()
{
    QString haslo = autaLista[randGen.bounded(autaLista.size())];;
    QString kategoria = "Marki Aut";
    emit hasloWprowadzone(haslo, kategoria);
    emit kategoriaWprowadzone(haslo, kategoria);
    accept();
}


