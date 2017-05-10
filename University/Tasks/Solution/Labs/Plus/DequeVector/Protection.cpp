#include <iostream>
#include <list>
#include <iterator>

using namespace std;

class List
{
public:
	List* next;
	int Value;

	List(int val)
	{
		Value = val;
		next = nullptr;
	}
	~List()
	{
		delete next;
	}

	void Add(int val)
	{
		List* element = this;

		while (element->next != nullptr) 
		{ 
			element = element->next;
		}

		element->next = new List(val);
	}
};
void change(List* l)
{
	List* n = l;
	//List* next = n->next;

	while(n != nullptr && n->next != nullptr)
	{
		List * temp = n->next->next;
		List * nextIteration = n->next->next;
		n->next->next = n;
		n->next = temp == nullptr ? temp : temp->next != nullptr ? temp->next : temp;
		n = nextIteration;
	}
}

int main()
{
	List *list = new List(1);
	list->Add(2);
	list->Add(3);
	list->Add(4);
	list->Add(5);
	list->Add(6);

	
	List *first = list;
	List *show = list;
	List *second = list->next;

	while (list != nullptr)
	{
		cout << list->Value << endl;
		list = list->next;
	}

	change(first);

	while (second != nullptr)
	{
		cout << second->Value << endl;
		second = second->next;
	}
	
	delete list;
	system("pause");
}