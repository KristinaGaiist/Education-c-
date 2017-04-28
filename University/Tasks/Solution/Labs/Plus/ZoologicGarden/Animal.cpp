#include "Animal.h"

#pragma region Public
Animal::Animal(char* name, double weight, Color color, AnimalType type)
{
	_name = new char[std::strlen(name) + 1];
	
	// Копирование строки. 
	strcpy(_name, name);
	
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