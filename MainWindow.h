#pragma once


#include <QtWidgets/QMainWindow>
#include<Qlabel>
#include<QPushButton>
#include <QVBoxLayout>
#include "ui_MainWindow.h"
#include "Gra.h"
#include "WprowadzHasloDialog.h"


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Gra gra;
    
    QLabel* labelStanGry;
    QLabel* labelOdgadnieteSlowo;
    QLabel* labelObrazWisielca;
    QLineEdit* lineEditLitera;
    QString kategoria;

private slots:
    void rozpocznijGre(const QString& haslo, const QString& kategoria);
    void zamknijGre();
    void on_lineEditLitera_returnPressed();
    void uaktualnijObrazWisielca(int liczbaBledow);
    void uaktualnijOdgadnieteSlowo(QString odgadnieteSlowo);
    void uaktualnijStanGry(QString stanGry);
    void uaktualnijKategorie(QString nowaKategoria);
    void komunikatWygranej();
    void komunikatPrzegranej();
    
    
signals:
    void hasloPuste();
    void kategoriaPuste();

};

