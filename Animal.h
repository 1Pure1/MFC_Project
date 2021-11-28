#pragma once


class Animal : public CObject
{
public:
	Animal(CString, CString, CString, CString);
	virtual ~Animal();



	virtual CString getName();
	virtual CString getColor() = 0;
	virtual CString getSound();
	virtual CString getNumOfLegs();
	virtual CString getAge();
	virtual CString getType();

	void Serialize(CArchive& archive);



protected:
	CString name;
	CString color;
	CString sound;
	CString numOfLegs;
	CString age;
	CString type;


	bool Is_Got_Milk;
	bool Is_Hatched_From_An_Egg;

};