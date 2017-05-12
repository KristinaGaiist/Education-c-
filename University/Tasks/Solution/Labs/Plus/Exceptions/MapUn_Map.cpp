#include <iostream>
#include <map>
#include <unordered_map>
#include <chrono>
#include "Exceptions.h"

using namespace std;

void FindElementMap(int);
//void FindElementUn_Map(int);
void CalculateMap(int);
void CalculateUnorderedMap(int);

#define throw AddInfo(__FILE__, __LINE__) +

int main()
{
	while (true)
	{
		try
		{
			FindElementMap(10000);
		}
		catch (Wrapper<InvalidNumberException> ex)
		{
			ex.Print();
		}
	}

	std::system("PAUSE");
	return EXIT_SUCCESS;
}


void CalculateUnorderedMap(int n)
{
	unordered_map <int, int> myDictionary2;

	auto start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < n; i++)
	{
		myDictionary2.insert(pair<int, int>(i, i));
	}
	auto elapsed = std::chrono::high_resolution_clock::now() - start;
	long long microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();

	cout << "Add three elements for " << microseconds << " microseconds." << endl << endl;

	start = std::chrono::high_resolution_clock::now();
	myDictionary2.find(1);
	elapsed = std::chrono::high_resolution_clock::now() - start;
	microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
	cout << "Search first elements to value for " << microseconds << " microseconds." << endl;

	start = std::chrono::high_resolution_clock::now();
	myDictionary2.find((n / 2));
	elapsed = std::chrono::high_resolution_clock::now() - start;
	microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
	cout << "Search center elements to value for " << microseconds << " microseconds." << endl;

	start = std::chrono::high_resolution_clock::now();
	myDictionary2.find(n);
	elapsed = std::chrono::high_resolution_clock::now() - start;
	microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
	cout << "Search last elements to value for " << microseconds << " microseconds." << endl << endl;
}
void FindElementMap(int n)
{
	int number;
	map <int, int> myDictionary;
	unordered_map <int, int> myDictionary2;

	for (int i = 0; i < n; i++)
	{
		myDictionary.insert(pair<int, int>(i, i));
		myDictionary2.insert(pair<int, int>(i, i));
	}

	cout << "Please, enter the number: ";
	cin >> number;

	if (number < n)
	{
		auto start = std::chrono::high_resolution_clock::now();
		myDictionary.find(number);
		auto elapsed = std::chrono::high_resolution_clock::now() - start;
		auto microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
		cout << "Search" << number << " element value for " << microseconds << " microseconds." << endl << endl;
	}
	else
	{
		throw InvalidNumberException();
	}
}