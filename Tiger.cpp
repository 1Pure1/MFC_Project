#include "pch.h"
#include "Tiger.h"
#include"zooTestOne.h"

Tiger::Tiger(CString name, CString age)
	:Mammal(name, _T("Orange"), age, _T("Tiger"))
{
	this->sound = _T("Roaaaaaarrrrr!!!!!!");
	this->numOfLegs = _T("4");
	
}

Tiger::~Tiger()
{
}

CString Tiger::getColor() { return color; }

