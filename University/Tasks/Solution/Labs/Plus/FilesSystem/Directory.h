#pragma once
#include <list>
#include "Types.h"
#include "Element.h"

namespace FilesSystem
{
	class Directory : public Element
	{
	private:
		std::list<Element*> _list;
	public:
		Directory(char* name);
		~Directory();
		void AddElement(Element *element);
		std::list<Element*> GetList();
	};
};