#pragma once
#include "Reptile.h"
class Iguana :
    public Reptile
{
public:
    Iguana(CString,  CString);
    virtual ~Iguana();


    virtual CString getColor();
};

