#include "Yaml.h"

#pragma once

Yaml::Yaml()
{
	_fields = new std::map<char*, char*>();
}

void Yaml::Add(char* key, char* value)
{
	_fields->insert(std::pair<char*, char*>(key, value));
}
