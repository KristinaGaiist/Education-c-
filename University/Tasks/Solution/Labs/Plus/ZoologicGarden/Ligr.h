#pragma once

#include "Lion.h"
#include "Tiger.h"

class Ligr : public Animal, private Lion, private Tiger
{
public:
	Ligr(char* name, double weight);

	void Say();
	double GetLengthStep();
};