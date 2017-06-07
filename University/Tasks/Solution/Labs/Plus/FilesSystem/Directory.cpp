#include "Directory.h"

namespace FilesSystem
{
	Directory::Directory(char * name) : Element(name, Types::Directory)
	{
	}

	Directory::~Directory()
	{
		for (auto iter = _list.begin(); iter != _list.end(); iter++)
		{
			delete ((Element*)*iter);
		}
	}

	void Directory::AddElement(Element * element)
	{
		_list.push_back(element);
	}

	std::list<Element*> Directory::GetList()
	{
		return _list;
	}
};