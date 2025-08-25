#include "Gra.h"

Gra::Gra(QObject* parent) : QObject(parent)
{
}

void Gra::rozpocznijGre(const QString& haslo, const QString& kategoria)
{
	wisielec.reset();
	slowo.wylosujNoweSlowo(haslo.toUpper().toStdString());
	graczyk.reset();

	emit uaktualnijObrazWisielca(wisielec.getLiczbaBledow());
	emit uaktualnijOdgadnieteSlowo(QString::fromStdString(slowo.getPokazSlowo()));
	emit uaktualnijKategoria(kategoria);

}

void Gra::sprawdzLitere(const QChar& litera)
{
	if (slowo.czyLiteraWystepuje(litera.toLatin1())) {
		graczyk.dodajOdgadnietaLitere(litera.toLatin1());
		emit uaktualnijOdgadnieteSlowo(QString::fromStdString(slowo.getPokazSlowo()));
	}
	else if (graczyk.czyLiteraJestBedna(litera.toLatin1())) {}
	else {
		graczyk.dodajBlednaLitere(litera.toLatin1());
		wisielec.zwiekszBledy();
		uaktualnijStanGrySignal(stanGry());
		
	}
	emit uaktualnijObrazWisielca(wisielec.getLiczbaBledow());
	emit uaktualnijOdgadnieteSlowo(QString::fromStdString(slowo.getPokazSlowo()));
	
	if (slowo.czyUkonczone()) {
		emit komunikatWygranejSignal();
	}
	else if (wisielec.czyPrzegrana()) {
		emit komunikatPrzegranejSignal();
	}
}

QString Gra::stanGry() const
{
	return "Bledne proby:\n " + QString::fromStdString(graczyk.getBledneLitery());
}

bool Gra::graTrwa()
{
	return !slowo.czyUkonczone() && !wisielec.czyPrzegrana();
}
std::string Gra::getOdgadnieteSlowo() const
{
	return slowo.getPokazSlowo();
}
std::string Gra::getPoprawneSLowo() const
{
	return slowo.getPokazpoprawneSlowo();
}
int Gra::getLiczbaBledow() const
{
	return wisielec.getLiczbaBledow();
}
