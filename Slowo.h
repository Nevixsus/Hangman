#pragma once

#include "ios.h"

class Slowo
{
private:
    std::string slowoDoOdgadniecia;
    std::string slowoOdgadniete;

public:
    
    Slowo();

    void wylosujNoweSlowo(const std::string& haslo);

    bool czyLiteraWystepuje(char litera);
    
    bool czyUkonczone() const;
    
    std::string getPokazpoprawneSlowo() const;
    std::string getPokazSlowo() const;
};

    
