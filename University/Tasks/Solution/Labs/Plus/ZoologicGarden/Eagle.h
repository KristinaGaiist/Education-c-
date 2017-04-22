#pragma once

#include "BaseBird.h"

class Eagle : public BaseBird
{
public:
	void Say();
	double GetLengthStep();

	Eagle(char* name, double weight);
};