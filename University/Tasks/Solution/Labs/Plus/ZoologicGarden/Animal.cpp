#include "Animal.h"

#pragma region Public
Animal::Animal(char* name, double weight, Color color, AnimalType type)
{
	int length = std::strlen(name);
	_name = new char[length];

	for (int i = 0; i < length; i++)
	{
		_name[i] = name[i];
	}

	// Конец строки.
	_name[length] = '\0';

	_weight = weight;
	_color = color;
	_type = type;
}
Animal::~Animal()
{
	delete[] _name;
}

void Animal::MakeStep(int count)
{
	int length = GetLengthStep() * count;

	std::cout << _name << " make " << count << " step(s). Metrs: " << length << "." << std::endl;
}
void Animal::Print()
{
	std::cout << "Type: " << TypeToString[_type] << "; Name: " << _name << "; Weight = " << _weight <<
		"; Color: " << ColorToString[_color] << "; Length of step: " << GetLengthStep() << std::endl;
}
#pragma endregion

#pragma region Private
void Animal::SayWord(char* str)
{
	std::cout << _name << ": " << str << std::endl;
}
#pragma endregion