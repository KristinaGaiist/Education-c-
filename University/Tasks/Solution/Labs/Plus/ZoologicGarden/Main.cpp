#include "BrownBear.h"
#include "WhiteBear.h"

#include "Eagle.h"
#include "Duck.h"

#include "Lion.h"
#include "Tiger.h"
#include "Ligr.h"

void Menu();
void Animals();
Animal* Factory(AnimalType type, char* name, double weight);
Animal* SetAnimal(Animal* animal);
void MakeSteps(Animal* animal);

int main()
{
	Animal* animal = NULL;
	Menu();

	while (true)
	{
		std::cout << "Please, enter command: ";
		int command;
		std::cin >> command;

		if (command > 2 && NULL == animal)
		{
			std::cout << "Please, init animal." << std::endl;

			continue;
		}

		if (-1 == command)
		{
			break;
		}
		else if (0 == command)
		{
			Menu();
		}
		else if (1 == command)
		{
			Animals();
		}
		else if (2 == command)
		{
			animal = SetAnimal(animal);
		}
		else if (3 == command)
		{
			animal->Say();
		}
		else if (4 == command)
		{
			animal->MakeStep();
		}
		else if (5 == command)
		{
			MakeSteps(animal);
		}
		else if (6 == command)
		{
			animal->Print();
		}
		else
		{
			std::cout << "Please, enter normal command" << std::endl;
		}
	}

	return 0;
}
void Menu()
{
	std::cout
		<< "-1. Exit" << std::endl
		<< "0. Show menu" << std::endl
		<< "1. Show animals" << std::endl
		<< "2. Set animal" << std::endl
		<< "3. Say" << std::endl
		<< "4. Make step" << std::endl
		<< "5. Make steps" << std::endl
		<< "6. Show info about animal" << std::endl
		<< std::endl;
}
void Animals()
{
	std::cout
		<< "0. BrownBear" << std::endl
		<< "1. WhiteBear" << std::endl
		<< "2. Lion" << std::endl
		<< "3. Tiger" << std::endl
		<< "4. Duck" << std::endl
		<< "5. Eagle" << std::endl
		<< "6. Ligr" << std::endl
		<< std::endl;
}

Animal* SetAnimal(Animal* animal)
{
	int type;
	std::cout << "Please, enter type: ";
	std::cin >> type;

	char* name = new char[30];
	std::cout << "Please, enter name: ";
	std::cin >> name;

	double weight;
	std::cout << "Please, enter weight: ";
	std::cin >> weight;

	if (NULL != animal)
	{
		delete animal;
	}

	Animal* result = Factory((AnimalType)type, name, weight);

	delete[] name;
	
	return result;
}
void MakeSteps(Animal* animal)
{
	int count;
	std::cout << "Pleae, enter count of steps: ";
	std::cin >> count;

	animal->MakeStep(count);
}
Animal* Factory(AnimalType type, char* name, double weight)
{
	switch (type)
	{
	case ABrownBear: return new BrownBear(name, weight);
	case AWhiteBear: return new WhiteBear(name, weight);

	case ALion: return new Lion(name, weight);
	case ATiger: return new Tiger(name, weight);

	case ADuck: return new Duck(name, weight);
	case AEagle: return new Eagle(name, weight);

	case ALigr: return new Ligr(name, weight);

	default: return new BrownBear(name, weight);
	}
}