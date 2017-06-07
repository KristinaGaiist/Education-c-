#include "YamlManager.h"
#include "Yaml.h"

void main()
{
	std::cout << "Please enter first file name: ";
	char file1[256];
	std::cin >> file1;

	std::cout << "Please enter first file name: ";
	char file2[256];
	std::cin >> file2;

	Yaml* yaml = YamlManager::Parse(file1);
	Yaml* yaml1 = YamlManager::Parse(file2);
	yaml->Print();
	yaml1->Print();

	if (yaml->PrintEquals(yaml1))
	{
		std::cout << yaml->GetName() << " are equals " << yaml1->GetName();
	}
	else
	{
		std::cout << yaml->GetName() << " aren't equals " << yaml1->GetName();
	}

	int a;
	std::cin >> a;

	delete yaml;
	delete yaml1;
}