#pragma once
#include "Animal.h"
class Mammal :
    public Animal
{
public:
    Mammal(CString , CString , CString ,  CString );
    virtual ~Mammal();

    virtual CString getColor() = 0;


};

