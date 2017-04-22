#pragma once

#include "Animal.h"

class BaseBear : public Animal
{
public:
	void Say();

	BaseBear(char* name, double weight, Color color, AnimalType type);
};