#include "pch.h"
#include "Draco.h"
#include"zooTestOne.h"

Draco::Draco(CString name, CString age)
	: Reptile(name, _T("Special Brown"), age, _T("Draco"))
{
	this->sound = _T("DragonDragon");
	this->numOfLegs = _T("4");
}

Draco::~Draco()
{
}

CString Draco::getColor() { return color; }

