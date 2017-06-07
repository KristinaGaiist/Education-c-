#include "YamlManager.h"

Yaml * YamlManager::Parse(char * filename)
{
	std::ifstream infile("thefile.txt");

	std::string line;
	while (std::getline(infile, line))
	{
		std::istringstream iss(line);

		std::vector<std::string> results((std::istream_iterator<std::string>(iss)),
			std::istream_iterator<std::string>());
	}

	return nullptr;
}