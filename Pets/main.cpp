#include "Cat.h"
#include "Dog.h"
#include "Hamster.h"
#include "Parrot.h"
#include <iostream>

using namespace std;

int main()
{

	Pet** ptr = new Pet * [5];

	ptr[0] = new Cat();
	ptr[1] = new Dog();
	ptr[2] = new Hamster();
	ptr[3] = new Parrot();
	ptr[4] = new Cat();

	for (int i = 0; i < 5; i++)
	{
		ptr[i]->CreatePet("Martyn", "Cute", "White", 9.5);
		ptr[i]->Show();
		ptr[i]->Type();
		ptr[i]->Sound();
	}

	return 0;
}