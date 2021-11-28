#pragma once
#include "Reptile.h"
class Crocodile :
    public Reptile
{
public:
    Crocodile(CString ,  CString);
    virtual ~Crocodile();

    virtual CString getColor();
};

