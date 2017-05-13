#include <iostream>
#include <map>
#include <unordered_map>
#include <chrono>
#include "Exceptions.h"

using namespace std;

void FindElementMap(int);

#define throw AddInfo(__FILE__, __LINE__) +

int main()
{
	for (int count = 1000; count <= 1000000; count = count * 10)
	{
		try
		{
			cout << "count = " << count << endl;
			FindElementMap(count);
		}
		catch (Wrapper<OutRiteLineException> ex)
		{
			ex.Print();
		}
		catch (Wrapper<OutLeftLineException> ex)
		{
			ex.Print();
		}
	}

	std::system("PAUSE");
	return EXIT_SUCCESS;
}

void FindElement(int count)
{
	int number;
	map <int, int> myDictionary;
	unordered_map <int, int> myDictionary2;

	for (int i = 0; i < count; i++)
	{
		myDictionary.insert(pair<int, int>(i, i));
		myDictionary2.insert(pair<int, int>(i, i));
	}

	cout << "Please, enter the number: ";
	cin >> number;

	if (number > count)
	{
		throw OutRiteLineException();
	}
	if (number < 0)
	{
		throw OutLeftLineException();
	}

	auto start = std::chrono::high_resolution_clock::now();
	myDictionary.find(number);
	auto elapsed = std::chrono::high_resolution_clock::now() - start;
	auto microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
	cout << "Map: Search " << number << " element value for " << microseconds << " microseconds." << endl << endl;

	start = std::chrono::high_resolution_clock::now();
	myDictionary2.find(number);
	elapsed = std::chrono::high_resolution_clock::now() - start;
	microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
	cout << "Unordered_map: Search " << number << " element value for " << microseconds << " microseconds." << endl << endl;
}