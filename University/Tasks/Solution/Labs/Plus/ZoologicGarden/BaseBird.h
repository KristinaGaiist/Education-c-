#pragma once

#include "Animal.h"

class BaseBird : public Animal
{
public:
	BaseBird(char* name, double weight, Color color, AnimalType type);
};