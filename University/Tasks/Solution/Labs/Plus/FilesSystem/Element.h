#pragma once

#include <iostream>
#include "Types.h"

namespace FilesSystem
{
	class Element
	{
	private:
		Types _type;
		char* _name;

	public:
		Element(char* name, Types type);
		~Element();

		char* GetName();
		Types GetType();
	};
};