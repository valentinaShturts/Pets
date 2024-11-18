#include "Parrot.h"

void Parrot::Show() const
{
	cout << "Parrot " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Color: " << color << endl;
}

void Parrot::Sound() const
{
	cout << " karr  karr!!" << endl << endl;
}

void Parrot::Type() const
{
	cout << name << " type: " << type << endl;
}