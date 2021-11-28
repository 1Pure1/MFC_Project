#include "pch.h"
#include "Crocodile.h"
#include"zooTestOne.h"

Crocodile::Crocodile(CString name, CString age)
	:Reptile(name,  _T("Green"),age, _T("Crocodile"))
{
	this->sound = _T("Grrrrrr");
	this->numOfLegs = _T("4");
	
}

Crocodile::~Crocodile()
{
}

CString Crocodile::getColor() { return color; }

	

