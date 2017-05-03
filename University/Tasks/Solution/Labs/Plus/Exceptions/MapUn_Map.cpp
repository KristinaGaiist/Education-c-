#include <iostream>
#include <map>
#include <unordered_map>
#include <chrono>
#include "Exceptions.h"

using namespace std;

void FindElement(int);
void CalculateMap(int);
void CalculateUnorderedMap(int);

int main()
{
	/*cout << "Map:" << endl;
	CalculateMap(1000);00
	CalculateMap(10000);
	CalculateMap(100000);
	CalculateMap(1000000);

	cout << "Unordered_Map:" << endl;
	CalculateUnorderedMap(1000);
	CalculateUnorderedMap(10000);
	CalculateUnorderedMap(100000);
	CalculateUnorderedMap(1000000);*/

	while (true)
	{
		try
		{
			FindElement(10000);
		}
		catch (InvalidNumber e) { }
	}

	system("PAUSE");
	return EXIT_SUCCESS;
}

void CalculateMap(int n)
{
	int number; 

	map <int, int> myDictionary;

	auto start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < n; i++)
	{
		myDictionary.insert(pair<int, int>(i, i));
	}
	auto elapsed = std::chrono::high_resolution_clock::now() - start;
	long long microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();

	cout << "Add three elements for " << microseconds << " microseconds." << endl << endl;

	start = std::chrono::high_resolution_clock::now();
	myDictionary.find(1);
	elapsed = std::chrono::high_resolution_clock::now() - start;
	microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
	cout << "Search first elements to value for " << microseconds << " microseconds." << endl;

	start = std::chrono::high_resolution_clock::now();
	myDictionary.find((n / 2));
	elapsed = std::chrono::high_resolution_clock::now() - start;
	microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
	cout << "Search center elements to value for " << microseconds << " microseconds." << endl;

	start = std::chrono::high_resolution_clock::now();
	myDictionary.find(n);
	elapsed = std::chrono::high_resolution_clock::now() - start;
	microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
	cout << "Search last elements to value for " << microseconds << " microseconds." << endl << endl;

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
void FindElement(int n)
{
	int number;
	map <int, int> myDictionary;
	for (int i = 0; i < n; i++)
	{
		myDictionary.insert(pair<int, int>(i, i));
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
		throw new InvalidNumber();
	}
}