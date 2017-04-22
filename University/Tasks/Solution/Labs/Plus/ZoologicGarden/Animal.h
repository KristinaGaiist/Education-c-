#pragma once

#include <iostream>

#include "Color.h"
#include "AnimalType.h"

class Animal
{
private:
	char* _name;
	double _weight;
	Color _color;
	AnimalType _type;

public:
	virtual double GetLengthStep() = 0;
	virtual void Say() = 0;

	Animal(char* name, double weight, Color color, AnimalType type);
	~Animal();

	void MakeStep(int count = 1);
	void Print();

protected:
	void SayWord(char* str);
};
