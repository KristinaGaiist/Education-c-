#include <iostream>
#include <string>
#include <map>
#include <chrono>

using namespace std;

int main()
{
	map <string, string> myDictionary =
	{
		{ "Apple", "������" },
		{ "Brother", "����" },///map ���� ����������������
		{ "Cat", "���" },
		{ "Dance", "�����" } 
	};

	auto start = std::chrono::high_resolution_clock::now();
	myDictionary.insert(pair<string, string>("Each", "������"));
	myDictionary.insert(pair<string, string>("Family", "�����"));
	myDictionary.insert(pair<string, string>("Good", "������"));
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