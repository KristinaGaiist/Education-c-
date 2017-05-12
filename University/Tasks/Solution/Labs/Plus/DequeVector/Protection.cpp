#include <iostream>
#include <list>
#include <iterator>
#include <set>

using namespace std;

class List
{
public:
	List* Next;
	int Value;

	List(int val)
	{
		Value = val;
		Next = nullptr;
	}
	~List()
	{
		delete Next;
	}

	void Add(int val)
	{
		List* element = this;

		while (element->Next != nullptr) 
		{ 
			element = element->Next;
		}

		element->Next = new List(val);
	}
};
void change(List* l)
{
	List* n = l;
	//List* next = n->next;

	while(n != nullptr && n->Next != nullptr)
	{
		List * temp = n->Next->Next;
		List * nextIteration = n->Next->Next;
		n->Next->Next = n;
		n->Next = temp == nullptr ? temp : temp->Next != nullptr ? temp->Next : temp;
		n = nextIteration;
	}
}
void TestChange()
{
	List *list = new List(1);
	list->Add(2);
	list->Add(3);
	list->Add(4);
	list->Add(5);
	list->Add(6);


	List *first = list;
	List *show = list;
	List *second = list->Next;

	while (list != nullptr)
	{
		cout << list->Value << endl;
		list = list->Next;
	}

	change(first);

	while (second != nullptr)
	{
		cout << second->Value << endl;
		second = second->Next;
	}

	delete list;
}

int SumList(List* list, set<int> &set)
{
	List* element = list;
	int result = 0;

	while (element != nullptr)
	{
		if (set.find(element->Value) != set.end())
		{
			result += element->Value;
		}
		
		element = element->Next;
	}

	return result;
}
void TestSum()
{
	List* list = new List(0);

	for (int i = 1; i <= 10; i++)
	{
		list->Add(i);
	}

	set<int> set;

	for (int i = -5; i <= 5; i++)
	{
		set.insert(i);
	}

	int sum = SumList(list, set);

	cout << "Sum: 15 == " << sum << endl;

	// 15
	delete list;
}

int main()
{
	//TestChange();
	TestSum();

	system("pause");
}