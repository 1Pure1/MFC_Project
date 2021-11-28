#include "pch.h"
#include "Sloth.h"
#include"zooTestOne.h"

Sloth::Sloth(CString name, CString age)
	:Mammal(name, _T("Dark Brown"), age, _T("Sloth"))
{
	this->sound = _T("ZzZzZzZzZz");
	this->numOfLegs = _T("2");
	
}

Sloth::~Sloth()
{
}

CString Sloth::getColor() { return color; }

