// Animal.cpp : implementation file
//

#include "pch.h"
#include "zooTestOne.h"
#include "Animal.h"

// Animal

Animal::Animal(CString name, CString color,CString age, CString type)
{
	this->name = name;
	this->color = color;
	this->age = age;
	this->type = type;
}

Animal::~Animal()
{
}

CString Animal::getName() { return this->name; }
CString Animal::getSound() { return this->sound; }
CString Animal::getNumOfLegs() { return this->numOfLegs; }
CString Animal::getAge() { return this->age; }
CString Animal::getType() { return this->type; }

void Animal::Serialize(CArchive& archive)
{
	if (archive.IsStoring())
	{
		archive << type << color << age << name;
	}
	else
	{
		archive >> type >> color >> age >> name;
	}

	
}


