#pragma once

#include "BaseCat.h"

class Lion : public BaseCat
{
public:
	double GetLengthStep();

	Lion(char* name, double weight);
};