#pragma once
#include <map>
#include <iostream>

class Yaml
{
private:
	char* _name;
	std::map<char*, char*>* _fields;
public:
	Yaml(char* name);
	~Yaml();
	void Add(char*, char*);
	void Print();
	bool Equals(Yaml* yaml);
	bool PrintEquals(Yaml* yaml);
	int Count();
	char* GetName();
private:
	bool PrintEquals(Yaml* left, Yaml* right);
};