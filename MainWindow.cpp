#include "MainWindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Hangman - Game");

    Dialog Dialog;
    QString styleSheet = "QMainWindow { background-image: url(:/images/images/tlo.jpg);background-size: cover; }";
    setStyleSheet(styleSheet);
    ui->labelObraz->setStyleSheet("color: white;");
    ui->labelStanGry->setStyleSheet("color: white;");
    ui->labelKatgoria->setStyleSheet("color: white;");
    ui->labelOdgadnieteSlowo->setStyleSheet("color: white;");
    setWindowIcon(QIcon(":/images/images/icon.png"));
    
    
    connect(&Dialog, &Dialog::rejected, this, &MainWindow::zamknijGre);
    connect(&Dialog, &Dialog::hasloPuste, this, &MainWindow::zamknijGre);
    
    connect(&Dialog, &Dialog::kategoriaPuste, this, &MainWindow::zamknijGre);
    connect(&Dialog, &Dialog::kategoriaWprowadzone, this, &MainWindow::rozpocznijGre);
    connect(&Dialog, &Dialog::hasloWprowadzone, this, &MainWindow::rozpocznijGre);


    connect(&gra, &Gra::komunikatWygranejSignal, this, &MainWindow::komunikatWygranej);
    connect(&gra, &Gra::komunikatPrzegranejSignal, this, &MainWindow::komunikatPrzegranej);

    
    
    Dialog.exec();

    
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::rozpocznijGre(const QString& haslo, const QString& kategoria) {
    
    

        if (haslo.isEmpty() || kategoria.isEmpty()) {
            
            zamknijGre();

        }
        

            gra.rozpocznijGre(haslo, kategoria);


            this->kategoria = kategoria;
            ui->labelStanGry->setText(gra.stanGry());



            uaktualnijObrazWisielca(gra.getLiczbaBledow());
            ui->labelKatgoria->setText("Kategoria: " + this->kategoria);
            connect(ui->lineEditLitera, &QLineEdit::returnPressed, this, &MainWindow::on_lineEditLitera_returnPressed);


            connect(&gra, &Gra::uaktualnijOdgadnieteSlowo, this, &MainWindow::uaktualnijOdgadnieteSlowo);
            connect(&gra, &Gra::uaktualnijStanGrySignal, this, &MainWindow::uaktualnijStanGry);
            connect(&gra, &Gra::uaktualnijKategoria, this, &MainWindow::uaktualnijKategorie);


            connect(&gra, &Gra::uaktualnijObrazWisielca, this, &MainWindow::uaktualnijObrazWisielca);

        

    
    
}
void MainWindow::zamknijGre()
{
    close();
}

void MainWindow::on_lineEditLitera_returnPressed()
{
    QString litera = ui->lineEditLitera->text().toUpper();
    if (litera.length() == 1 && litera.at(0).isLetter()) {
        
        gra.sprawdzLitere(litera.at(0).toLatin1());
        
    }
    ui->lineEditLitera->clear();
}


void MainWindow::uaktualnijObrazWisielca(int liczbaBledow)
{
    QString komunikat = "Liczba bledow wynosi: " + QString::number(liczbaBledow);
    
    QString sciezkaObrazu = QString(":/images/images/s%0.jpg").arg(liczbaBledow);
    QPixmap obraz(sciezkaObrazu);

    obraz = obraz.scaled(ui->labelObraz->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);

    ui->labelObraz->setPixmap(obraz);
    ui->labelObrazWisielca->setText(komunikat);
}

void MainWindow::uaktualnijOdgadnieteSlowo(QString odgadnieteSlowo)
{

    QString odgadnieteZOdstepami = odgadnieteSlowo;
    odgadnieteZOdstepami.replace("", " ").remove(0, 1).chop(1);

    QString komunikat = "Aktualne slowo to: " + odgadnieteZOdstepami;
    ui->labelOdgadnieteSlowo->setText(komunikat);
}
void MainWindow::uaktualnijStanGry(QString stanGry)
{
    ui->labelStanGry->setText(stanGry);
}
void MainWindow::uaktualnijKategorie(QString nowaKategoria)
{
    ui->labelKatgoria->setText("Kategoria: " + nowaKategoria);
}

void MainWindow::komunikatWygranej()
{
    QMessageBox msgBox;
    msgBox.information(this, "Wygrana", "Wygrales, odgadniete slowo to: " + QString::fromStdString(gra.getOdgadnieteSlowo()));
    zamknijGre();
}

void MainWindow::komunikatPrzegranej()
{
    QMessageBox msgBox;
    msgBox.information(this, "Przegrana", "Niestety, przegrales.\nPrawidlowe slowo to: " + QString::fromStdString(gra.getPoprawneSLowo()));
    zamknijGre();
}
