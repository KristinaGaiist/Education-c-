#pragma once

#include "Animal.h"

class BaseCat : public Animal
{
public:
	void Say();

	BaseCat(char* name, double weight, Color color, AnimalType type);
};