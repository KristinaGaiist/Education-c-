#pragma once

#include "BaseBear.h"

class BrownBear : public BaseBear
{
public:
	double GetLengthStep();

	BrownBear(char* name, double weight);
};