#pragma once
#include "Reptile.h"
class Draco :
    public Reptile
{
public:
    Draco(CString,  CString);
    virtual ~Draco();


    virtual CString getColor();
};

