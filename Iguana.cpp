#include "pch.h"
#include "Iguana.h"
#include"zooTestOne.h"

Iguana::Iguana(CString name, CString age)
	:Reptile(name, _T("Bright Green"), age, _T("Iguana"))
{
	this->sound = _T("Ssssssss");
	this->numOfLegs = _T("4");
}

Iguana::~Iguana()
{
}

CString Iguana::getColor() { return color; }

