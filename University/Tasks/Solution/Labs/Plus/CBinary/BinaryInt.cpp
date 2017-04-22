#include <iostream>
#include "BinaryInt.h"

using namespace std;
using namespace Binary;


BinaryInt::BinaryInt(int number)
{
	_number = Validate(number);
}
int* BinaryInt::Get()
{
	if (0 == _number)
	{
		int* arr = new int[1];
		arr[0] = 0;

		return arr;
	}

	int number = _number;
	int count = Count();

	int* binary = new int[count];

	for (int i = count - 1; number > 0; i--)
	{
		binary[i] = number % 2;
		number = number / 2;
	}

	return binary;
}
int BinaryInt::Count()
{
	if (0 == _number)
	{
		return 1;
	}

	int number = _number;
	int count = 0;

	while (number > 0)
	{
		number /= 2;
		count++;
	}

	return count;
}
void BinaryInt::Print()
{
	int* binary = Get();
	int length = Count();

	for (int i = 0; i < length; i++)
	{
		cout << binary[i];
	}

	delete[] binary;
}

int BinaryInt::Validate(int number)
{
	if (number < 0)
	{
		cerr << "The number cannot be less than zero. The number was positive." << endl;
		number = -number;
	}

	return number;
}