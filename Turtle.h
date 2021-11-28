#pragma once
#include "Reptile.h"
class Turtle :
    public Reptile
{
public:
    Turtle(CString,  CString);
    virtual ~Turtle();


    virtual CString getColor();
};

