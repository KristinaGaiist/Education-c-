#include <iostream>
#include <deque>        
#include <vector>
#include <iterator>
#include <chrono>

using namespace std;

void CalculateDeque(int);
void CalculateVector(int);

int main()
{
	cout << "Deque:" << endl;
	CalculateDeque(1000);
	CalculateDeque(10000);
	CalculateDeque(100000);
	CalculateDeque(1000000);

	cout << "Vector: " << endl;
	CalculateVector(1000);
	CalculateVector(10000);
	CalculateVector(100000);
	CalculateVector(1000000);

	system("PAUSE");
	return EXIT_SUCCESS;
}

void CalculateDeque(int n)
{
	deque<int> deque;

	for (int i = 0; i < n; i++)
	{
		deque.push_front(i);
	}

	// First
	auto start = std::chrono::high_resolution_clock::now();
	deque.pop_front();
	auto elapsed = std::chrono::high_resolution_clock::now() - start;
	long long microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
	cout << "count: " << n << "; remove: first; microseconds: " << microseconds << endl;

	// Center
	start = std::chrono::high_resolution_clock::now();
	deque.erase(deque.begin() + (n / 2));
	elapsed = std::chrono::high_resolution_clock::now() - start;
	microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
	cout << "count: " << n << "; remove: " << (n / 2) << "; microseconds: " << microseconds << endl;

	// Last
	start = std::chrono::high_resolution_clock::now();
	deque.pop_back();
	elapsed = std::chrono::high_resolution_clock::now() - start;
	microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
	cout << "count: " << n << "; remove: last; microseconds: " << microseconds << endl << endl;
}

void CalculateVector(int n)
{
	vector<int> vector;

	for (int i = 0; i < n; i++)
	{
		vector.push_back(i);
	}

	// First
	auto start = std::chrono::high_resolution_clock::now();
	vector.erase(vector.begin());
	auto elapsed = std::chrono::high_resolution_clock::now() - start;
	long long microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
	cout << "count: " << n << "; remove: first; microseconds: " << microseconds << endl;

	// Center
	start = std::chrono::high_resolution_clock::now();
	vector.erase(vector.begin() + (n / 2));
	elapsed = std::chrono::high_resolution_clock::now() - start;
	microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
	cout << "count: " << n << "; remove: center; microseconds: " << microseconds << endl;

	// Last
	start = std::chrono::high_resolution_clock::now();
	vector.pop_back();
	elapsed = std::chrono::high_resolution_clock::now() - start;
	microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
	cout << "count: " << n << "; remove: last; microseconds: " << microseconds << endl << endl;

	/*for (auto iter = vector.begin(); iter != vector.end(); iter++)
	{
		cout << *iter << endl;
	}*/
}