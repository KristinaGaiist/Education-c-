#include "YamlManager.h"

Yaml* YamlManager::Parse(char* filename)
{
	Yaml* yaml = new Yaml(filename);

	std::ifstream infile(filename);

	std::string line;
	while (std::getline(infile, line))
	{
		std::istringstream iss(line);

		std::string key;
		std::string value;
		std::getline(iss, key, ':');
		iss >> value;

		char keyChar[1024];
		char valueChar[1024];
		strcpy_s(keyChar, key.c_str());
		strcpy_s(valueChar, value.c_str());

		yaml->Add(keyChar, valueChar);
	}

	return yaml;
}