#include "Hamster.h"

void Hamster::Show() const
{
	cout << "Hamster " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Color: " << color << endl;
}

void Hamster::Sound() const
{
	cout << " squeak  squeak!!" << endl << endl;
}

void Hamster::Type() const
{
	cout << name << " type: " << type << endl;
}