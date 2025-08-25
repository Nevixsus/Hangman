#pragma once


#include <QObject>
#include"Slowo.h"
#include"Gracz.h"
#include"Wisielec.h"



class Gra : public QObject
{
	Q_OBJECT
private: 
	Wisielec wisielec;
	Slowo slowo;
	Gracz graczyk;
public:
	Gra(QObject*parent = nullptr);
	void rozpocznijGre(const QString& haslo, const QString& kategoria);
	void sprawdzLitere(const QChar& litera);
	QString stanGry() const;
	bool graTrwa();
	std::string getOdgadnieteSlowo() const;
	std::string getPoprawneSLowo() const;
	int getLiczbaBledow() const;
	
signals:
	void uaktualnijObrazWisielca(int liczbaBledow);
	void uaktualnijOdgadnieteSlowo(QString odgadnieteSLowo);
	void uaktualnijStanGrySignal(QString stanGry);
	void uaktualnijKategoria(QString kategoria);
	void komunikatWygranejSignal();
	void komunikatPrzegranejSignal();
};

