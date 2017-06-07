#pragma once

#include "Directory.h"
#include "File.h"
#include "Element.h"

namespace FilesSystem
{
	class FileManager
	{
	private:
		Directory* _root;
	public:
		FileManager();
		~FileManager();
		Directory* GetRoot();
		void Test();
		void Print();
		void Print(char* path, Element* element);
	};
};