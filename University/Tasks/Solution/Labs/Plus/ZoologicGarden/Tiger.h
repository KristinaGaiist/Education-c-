#pragma once

#include "BaseCat.h"

class Tiger : public BaseCat
{
public:
	double GetLengthStep();

	Tiger(char* name, double weight);
};