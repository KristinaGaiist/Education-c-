#include "BrownBear.h"
#include "WhiteBear.h"

#include "Eagle.h"
#include "Duck.h"

#include "Lion.h"
#include "Tiger.h"
#include "Ligr.h"

#pragma region Bears
BrownBear::BrownBear(char* name, double weight) : BaseBear(name, weight, Color::Brown, AnimalType::ABrownBear) { }
WhiteBear::WhiteBear(char* name, double weight) : BaseBear(name, weight, Color::White, AnimalType::AWhiteBear) { }

double BrownBear::GetLengthStep()
{
	return 2.2;
}
double WhiteBear::GetLengthStep()
{
	return 4.1;
}
#pragma endregion

#pragma region Birds
Duck::Duck(char* name, double weight) : BaseBird(name, weight, Color::Yellow , AnimalType::ADuck) { }
Eagle::Eagle(char* name, double weight) : BaseBird(name, weight, Color::White, AnimalType::AEagle) { }

double Duck::GetLengthStep()
{
	return 100;
}
double Eagle::GetLengthStep()
{
	return 200;
}

void Duck::Say()
{

	SayWord("Krya");
}
void Eagle::Say()
{
	SayWord("XZ kak govorit EAGLE!!");
}
#pragma endregion

#pragma region Cats
Lion::Lion(char* name, double weight) : BaseCat(name, weight, Color::Yellow, AnimalType::ALion) { }
Tiger::Tiger(char* name, double weight) : BaseCat(name, weight, Color::White, AnimalType::ATiger) { }
Ligr::Ligr(char* name, double weight) : Lion(name, weight), Tiger(name, weight), Animal(name, weight, Color::Yellow, AnimalType::ALigr){ }

double Lion::GetLengthStep()
{
	return 5.43;
}
double Tiger::GetLengthStep()
{
	return 2.54;
}
void Ligr::Say()
{
	Lion::Say();
	Tiger::Say();
}
double Ligr::GetLengthStep()
{
	return Lion::GetLengthStep() + Tiger::GetLengthStep();
}
#pragma endregion


