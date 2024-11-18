#include "Cat.h"

void Cat::Show() const
{
	cout << "Cat " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Color: " << color << endl;
}

void Cat::Sound() const
{
	cout << " meow  meow!!" << endl << endl;
}

void Cat::Type() const
{
	cout << name << " type: " << type << endl;
}
