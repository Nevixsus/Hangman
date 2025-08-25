#pragma once

#include"ios.h"

class Wisielec
{
    
private:
    int liczbaBledow;

public:
    
    Wisielec();
    void reset();
    bool czyPrzegrana() const;
    void zwiekszBledy();
    int getLiczbaBledow() const;

};

