#include "FileManager.h"
#include "Directory.h"
#include "Types.h"

namespace FilesSystem
{
	FileManager::FileManager()
	{
		_root = new Directory("root");
	}
	FileManager::~FileManager()
	{
		delete _root;
	}
	Directory* FilesSystem::FileManager::GetRoot()
	{
		return _root;
	}
	void FileManager::Test()
	{
		auto dir1 = new Directory("Dir1");
		dir1->AddElement(new File("file1", "content for file1"));
		dir1->AddElement(new File("file2", "content for file2"));
		
		auto dir2 = new Directory("Dir2");
		dir2->AddElement(new File("file3", "content for file3"));
		dir1->AddElement(dir2);

		auto dir3 = new Directory("Dir3");
		dir3->AddElement(new File("file4", "content for file4"));
		dir3->AddElement(new File("file5", "content for file5"));

		_root->AddElement(dir1);
		_root->AddElement(dir3);
	}
	void FileManager::Print()
	{
		Print("", _root);
	}

	void FileManager::Print(char* path, Element* element)
	{
		if (element->GetType() == Types::File)
		{
			std::cout << path << "/" << element->GetName() << std::endl;
		}
		else
		{
			char result[500];
			result[0] = '\0';

			strcat(result, path);
			strcat(result, "/");
			strcat(result, element->GetName());

			auto list = ((Directory*)element)->GetList();

			for (auto iter = list.begin(); iter != list.end(); iter++)
			{
				Print(result, *iter);
			}
		}
	}
};