#pragma once
#include "Animal.h"
class Reptile :
    public Animal
{
public:
    Reptile(CString , CString , CString , CString );
    virtual ~Reptile();

    virtual CString getColor() = 0;
};

