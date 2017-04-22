#include "BaseBear.h"
#include "BaseBird.h"
#include "BaseCat.h"

BaseBear::BaseBear(char* name, double weight, Color color, AnimalType type) : Animal(name, weight, color, type) { }
BaseBird::BaseBird(char* name, double weight, Color color, AnimalType type) : Animal(name, weight, color, type) { }
BaseCat::BaseCat(char* name, double weight, Color color, AnimalType type) : Animal(name, weight, color, type) { }

void BaseBear::Say()
{
	SayWord("brr");
}
void BaseCat::Say()
{
	SayWord("meow");
}
