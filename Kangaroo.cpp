#include "pch.h"
#include "Kangaroo.h"
#include"zooTestOne.h"

Kangaroo::Kangaroo(CString name, CString age)
	:Mammal(name, _T("Brownish Orange"), age, _T("Kangaroo"))
{
	this->sound = _T("Jumpjump");
	this->numOfLegs = _T("2");
	
}

Kangaroo::~Kangaroo()
{
}

CString Kangaroo::getColor() { return color; }

