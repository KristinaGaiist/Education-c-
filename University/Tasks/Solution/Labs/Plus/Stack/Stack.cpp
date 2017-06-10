#include <iostream>
using namespace std;


class Stack {
private:
	const int n = 10;  
	int *elements;     
	int max = 0;
	int count = 0;     

public:
	Stack() 
	{
		elements = new int[n]; 
	}

	~Stack()  
	{
		delete[] elements;
	}

	void Add(int elem)   
	{
		if (count == n) cout << "Стек переполнен." << endl;
		else
			elements[count++] = elem;
		if (elem > max)
		{
			max = elem;
		}
	}

	int Get()   
	{
		if (empty()) {
			cout << "Стек пуст" << endl;
			return NULL;
		}
		else {
			int elem = elements[--count];
			elements[count] = NULL; 
			return elem;
		}
	}
	int GetMax()
	{
		return max;
	}
	int size()  
	{
		return count;
	}

	bool empty()  
	{
		if (count == 0) return true;
		else
			return false;
	}
};


int main()
{
	setlocale(LC_ALL, "Russian");
	Stack *s = new Stack();

	s->Add(1);
	s->Add(2);
	s->Add(7);
	s->Add(4);
	s->Add(5);

	cout << "Максимальный элемент: " << s->GetMax() << endl;
	cout << "Выведем их на экран: " << endl;
	while (!s->empty()) {
		int t = s->Get();
		cout << t << " ";
	}

	delete s;
	system("pause");
	return 0;
}
