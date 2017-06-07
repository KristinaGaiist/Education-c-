#include <iostream>
#include "FileManager.h"

using namespace std;

void main()
{
	auto files = new FilesSystem::FileManager();
	files->Test();

	files->Print();

	delete files;
	system("pause");
}