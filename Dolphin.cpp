#include "pch.h"
#include "Dolphin.h"
#include"zooTestOne.h"

Dolphin::Dolphin(CString name, CString age)
	:Mammal(name, _T("Dark Grey"), age, _T("Dolphin"))
{
	this->sound = _T("Hihihihi");
	this->numOfLegs = _T("There is no legs");

}

Dolphin::~Dolphin()
{
}

CString Dolphin::getColor() { return color; }

