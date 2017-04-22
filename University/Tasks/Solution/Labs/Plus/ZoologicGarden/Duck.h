#pragma once

#include "BaseBird.h"

class Duck : public BaseBird
{
public:
	void Say();
	double GetLengthStep();

	Duck(char* name, double weight);
};