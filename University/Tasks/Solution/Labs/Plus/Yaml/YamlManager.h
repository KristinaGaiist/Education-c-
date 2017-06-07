#pragma once

#include "Yaml.h"
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <iterator>

class YamlManager
{
public:
	static Yaml* Parse(char* filename);
};
