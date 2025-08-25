#include "Slowo.h"

Slowo::Slowo()
{
}

void Slowo::wylosujNoweSlowo(const std::string& haslo)
{
	slowoDoOdgadniecia = haslo;
	slowoOdgadniete = std::string(slowoDoOdgadniecia.length(), '_');
}

bool Slowo::czyLiteraWystepuje(char litera)
{
	bool wystepuje = false;
	for (size_t i = 0; i < slowoDoOdgadniecia.length(); ++i) {
		if (slowoDoOdgadniecia[i] == litera) {
			slowoOdgadniete[i] = litera;
			wystepuje = true;
		}
	}
	return wystepuje;
}


bool Slowo::czyUkonczone() const
{
	return slowoOdgadniete == slowoDoOdgadniecia;
}

std::string Slowo::getPokazpoprawneSlowo() const
{
	return slowoDoOdgadniecia;
}

std::string Slowo::getPokazSlowo() const
{
	return slowoOdgadniete;
}

