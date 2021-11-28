#pragma once
#include "Mammal.h"
class Tiger :
    public Mammal
{
public:
    Tiger(CString,  CString);
    virtual ~Tiger();


    virtual CString getColor();
};

