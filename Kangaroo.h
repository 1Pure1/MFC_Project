#pragma once
#include "Mammal.h"
class Kangaroo :
    public Mammal
{
public:
    Kangaroo(CString , CString );
    virtual ~Kangaroo();


    virtual CString getColor();
};

