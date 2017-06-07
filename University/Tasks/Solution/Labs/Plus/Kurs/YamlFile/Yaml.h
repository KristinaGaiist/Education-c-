#pragma once
#include <map>

class Yaml
{
private:
	std::map<char*, char*>* _fields;
public:
	Yaml();
	void Add(char*, char*);
};