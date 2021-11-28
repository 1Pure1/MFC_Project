#pragma once
#include "Mammal.h"
class Sloth :
    public Mammal
{
public:
    Sloth(CString,  CString);
    virtual ~Sloth();


    virtual CString getColor();
};

