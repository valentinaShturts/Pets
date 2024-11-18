#include "Dog.h"

void Dog::Show() const
{
	cout << "Dog " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Color: " << color << endl;
}

void Dog::Sound() const
{
	cout << " woof  woof!!" << endl << endl;
}

void Dog::Type() const
{
	cout << name << " type: " << type << endl;
}