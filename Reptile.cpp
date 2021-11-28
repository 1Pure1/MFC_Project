#include "pch.h"
#include "Reptile.h"
#include"zooTestOne.h"


Reptile::Reptile(CString name, CString color, CString age, CString type)
	:Animal(name, color, age, type)
{
	this->Is_Hatched_From_An_Egg = true;
	this->Is_Got_Milk = false;
	
}

Reptile::~Reptile()
{
}
