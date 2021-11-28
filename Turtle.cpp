#include "pch.h"
#include "Turtle.h"
#include"zooTestOne.h"

Turtle::Turtle(CString name, CString age)
	:Reptile(name, _T("Dark Green"), age, _T("Turtle"))
{
	this->sound = _T("Haaaaaaa");
	this->numOfLegs = _T("4");
}

Turtle::~Turtle()
{
}

CString Turtle::getColor() { return color; }

