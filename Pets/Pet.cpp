#include "Pet.h"

void Pet::CreatePet() 
{
	name = "undefined"; 
	type = "undefined";
	color = "undefined";
	age = 0;
}

void Pet::CreatePet(const char* n, const char* t, const char* c, double a) 
{
	name = n;
	type = t;
	color = c;
	age = a;
}

void Pet::Show() const
{
	cout << "Pet is undefied" << endl;
}

void Pet::Sound() const
{
	cout << "Pet is undefied" << endl;
}

void Pet::Type() const
{
	cout << "Type is undefied" << endl;
}