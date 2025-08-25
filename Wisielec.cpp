#include "Wisielec.h"

Wisielec::Wisielec():liczbaBledow(0)
{
}

void Wisielec::reset()
{
	liczbaBledow = 0;
}
bool Wisielec::czyPrzegrana() const
{
	return liczbaBledow >= 9; 
}
void Wisielec::zwiekszBledy()
{
	liczbaBledow++;
}

int Wisielec::getLiczbaBledow() const {
	return liczbaBledow;
}

