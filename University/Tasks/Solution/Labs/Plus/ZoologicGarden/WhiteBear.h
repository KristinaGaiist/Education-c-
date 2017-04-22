#pragma once

#include "BaseBear.h"

class WhiteBear : public BaseBear
{
public:
	double GetLengthStep();

	WhiteBear(char* name, double weight);
};