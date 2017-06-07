#pragma once

#include "Element.h"

namespace FilesSystem
{
	Element::Element(char* name, Types type)
	{
		int length = strlen(name);
		_name = new char[length + 1];
		strcpy(_name, name);

		_type = type;
	}
	Element::~Element()
	{
		delete[] _name;
	}
	char* Element::GetName()
	{
		return _name;
	}

	Types Element::GetType()
	{
		return _type;
	}
};