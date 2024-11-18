#pragma once
#include "Pet.h"

class Cat : public Pet
{
public:
    virtual void Show() const;
    virtual void Sound() const;
    virtual void Type() const;
};

