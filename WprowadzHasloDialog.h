#pragma once

#include<QDialog>
#include<QMessageBox>
#include <QCloseEvent>

#include <QCoreApplication>
#include <QComboBox>
#include <QRandomGenerator>

#include <QTime>

namespace Ui { class Dialog; }
class Dialog : public QDialog
{
	Q_OBJECT

public:
    explicit Dialog(QWidget* parent = nullptr);
    ~Dialog();
signals:
	void hasloWprowadzone(const QString& haslo, const QString& kategoria);
	void kategoriaWprowadzone(const QString& haslo, const QString& kategoria);
	void hasloPuste();
	void kategoriaPuste();
	
private slots:
	void on_buttonOK_clicked();
	
	void on_lineEditHaslo_returnPressed();
	void closeEvent(QCloseEvent* event);
	void losujKategorieKraje();
	void losujKategorieStolice();
	void losujKategorieZwierzeta();
	void losujKategorieFilmy();
	void losujKategorieSporty();
	void losujKategorieZawody();
	void losujKategorieJedzenie();
	void losujKategorieAuta();

private:
    Ui::Dialog* ui;
	QLineEdit* lineEditKategoria;
	QRandomGenerator randGen;


	QStringList krajeLista;
	QStringList stoliceLista;
	QStringList zwierzetaLista;
	QStringList filmyLista;
	QStringList sportyLista;
	QStringList zawodyLista;
	QStringList jedzenieLista;
	QStringList autaLista;

	

};
