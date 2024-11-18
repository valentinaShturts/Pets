#pragma once
#include <iostream>
using namespace std;

class Pet
{
protected:

    string name;
    string type;
    string color;
    double age;

public:

    void CreatePet();
    void CreatePet(const char* n, const char* t, const char* c, double a);
    virtual void Show() const;
    virtual void Sound() const;
    virtual void Type() const;
};

