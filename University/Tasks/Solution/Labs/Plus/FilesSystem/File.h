#pragma once

#include <iostream>
#include "Element.h"

namespace FilesSystem
{
	class File : public Element
	{
	private:
		char* _text;
	public:
		File(char* name, char* text);
		~File();

		char* GetContent();
	};
};