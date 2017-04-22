#include <iostream>
#include "BinaryInt.h"

using namespace std;
using namespace Binary;

void main()
{
	while (true)
	{
		cout << "Please, enter number: ";

		int number;
		cin >> number;

		BinaryInt binary(number);
		cout << "Result: ";
		binary.Print();

		cout << endl;
	}
}