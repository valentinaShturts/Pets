#pragma once
#include "Pet.h"

class Hamster : public Pet
{
public:
    virtual void Show() const;
    virtual void Sound() const;
    virtual void Type() const;
};

