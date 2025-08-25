#include "Gracz.h"

Gracz::Gracz()
{
	reset();
}

void Gracz::reset()
{
	this->odgadnieteLitery.clear();
	this->bledneLitery.clear();
}

void Gracz::dodajOdgadnietaLitere(char litera)
{
	odgadnieteLitery.push_back(litera);
}

void Gracz::dodajBlednaLitere(char litera)
{
	bledneLitery.push_back(litera);
}

std::string Gracz::getBledneLitery() const
{
	std::string result;
	for (char litera : bledneLitery) {
		result += litera;
		result += ' ';
	}
	return result;
}

bool Gracz::czyLiteraJestBedna(char litera) const
{
	return std::find(bledneLitery.begin(), bledneLitery.end(), litera) != bledneLitery.end();
}



