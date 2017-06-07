#include <iostream>
#include "File.h"

namespace FilesSystem
{
	File::File(char * name, char * text) : Element(name, Types::File)
	{
		int length = strlen(text);
		_text = new char[length + 1];
		strcpy(_text, text);
	}

	File::~File()
	{
		delete[] _text;
	}

	char * File::GetContent()
	{
		return _text;
	}
};