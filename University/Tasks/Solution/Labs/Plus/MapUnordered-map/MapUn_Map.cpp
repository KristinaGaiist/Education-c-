#include <iostream>
#include <string>
#include <map>
#include <chrono>

using namespace std;

int main()
{
	map <string, string> myDictionary =
	{
		{ "Apple", "Яблоко" },
		{ "Brother", "Брат" },///map явно инициализирована
		{ "Cat", "Кот" },
		{ "Dance", "Танец" } 
	};

	auto start = std::chrono::high_resolution_clock::now();
	myDictionary.insert(pair<string, string>("Each", "Каждый"));
	myDictionary.insert(pair<string, string>("Family", "Семья"));
	myDictionary.insert(pair<string, string>("Good", "Хорошо"));
	auto elapsed = std::chrono::high_resolution_clock::now() - start;
	long long microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
	cout << "count: " << n << "; remove: last; microseconds: " << microseconds << endl << endl;

	
	cout << "myDictionary contains:\n";
	for (auto it = myDictionary.begin(); it != myDictionary.end(); it++) 
	{
		cout << it->first << " : " << it->second << endl;
	}
	system("pause");
}