#pragma once
#include "Mammal.h"
class Dolphin :
    public Mammal
{
public:
    Dolphin(CString,  CString);
    virtual ~Dolphin();


    virtual CString getColor();
};

