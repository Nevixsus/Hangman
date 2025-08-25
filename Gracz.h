#pragma once


#include "ios.h"
#include <algorithm>
class Gracz
{

private:
    std::vector<char> odgadnieteLitery;
    std::vector<char> bledneLitery;

public:
    
    Gracz();
    void reset();

    
    void dodajOdgadnietaLitere(char litera);

    
    void dodajBlednaLitere(char litera);

    
    std::string getBledneLitery() const;
    bool czyLiteraJestBedna(char litera) const;
    

};








