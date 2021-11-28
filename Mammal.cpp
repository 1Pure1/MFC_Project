#include "pch.h"
#include "Mammal.h"
#include"zooTestOne.h"
Mammal::Mammal(CString name, CString color, CString age, CString type)
	:Animal(name, color, age, type)
{
	this->Is_Got_Milk = true;
	this->Is_Hatched_From_An_Egg = false;
}

Mammal::~Mammal()
{
}
