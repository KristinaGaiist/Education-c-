#pragma once

#include "Yaml.h"

Yaml::Yaml(char* name)
{
	int length = strlen(name) + 1;
	_name = new char[length];
	strcpy(_name, name);

	_fields = new std::map<char*, char*>();
}

Yaml::~Yaml()
{
	for (auto iter = _fields->begin(); iter != _fields->end(); iter++)
	{
		char* key = iter->first;
		char* value = iter->second;

		delete key;
		delete value;
	}

	_fields->clear();

	delete _fields;
}

void Yaml::Add(char* key, char* value)
{
	char* key_ = new char[strlen(key) + 1];
	char* value_ = new char[strlen(value) + 1];

	strcpy(key_, key);
	strcpy(value_, value);

	_fields->insert(std::pair<char*, char*>(key_, value_));
}

void Yaml::Print()
{
	std::cout << _name << std::endl;

	for (auto iter = _fields->begin(); iter != _fields->end(); iter++)
	{
		std::cout << "\t" << iter->first << ": " << iter->second << std::endl;
	}
}

bool Yaml::Equals(Yaml* yaml)
{
	if (this->Count() != yaml->Count())
	{
		return false;
	}

	auto fieldsRight = yaml->_fields;

	for (auto iter = _fields->begin(); iter != _fields->end(); iter++)
	{
		bool has = false;

		for (auto iter1 = fieldsRight->begin(); iter1 != fieldsRight->end(); iter1++)
		{
			int length = strlen(iter->first);

			if (length != strlen(iter1->first))
			{
				continue;
			}

			bool equals = true;

			for (int i = 0; i <= length; i++)
			{
				equals &= (iter->first[i] == iter1->first[i]);
			}

			has |= equals;
		}
		if (!has)
		{
			return false;
		}
	}

	return true;
}

bool Yaml::PrintEquals(Yaml* yaml)
{
	return PrintEquals(this, yaml) & PrintEquals(yaml, this);
}

bool Yaml::PrintEquals(Yaml* left, Yaml* right)
{
	auto leftFields = left->_fields;
	auto rightFields = right->_fields;
	bool equalsYamls = true;

	for (auto rightIter = leftFields->begin(); rightIter != leftFields->end(); rightIter++)
	{
		bool has = true;

		for (auto leftIter = rightFields->begin(); leftIter != rightFields->end(); leftIter++)
		{
			int length = strlen(rightIter->first);

			bool equals = true;

			for (int i = 0; i <= length - 1; i++)
			{
				equals &= (rightIter->first[i] == leftIter->first[i]);
			}

			has = equals;

			if (equals)
			{
				break;
			}
		}

		if (equalsYamls && !has)
		{
			std::cout << right->_name << " doesn't contain a field: " << std::endl;
		}
		if (!has)
		{
			std::cout << "\t" << rightIter->first << ": " << rightIter->second << std::endl;
		}
		equalsYamls &= has;
	}

	return equalsYamls;
}


int Yaml::Count()
{
	int count = 0;

	for (auto iter = _fields->begin(); iter != _fields->end(); iter++)
	{
		count++;
	}

	return count;
}

char * Yaml::GetName()
{
	return _name;
}
