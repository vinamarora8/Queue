#include <iostream>
using namespace std;

class queue{
private:
	int size;
	int *first, *last;
public:
	queue(int l)
	{
		size = l;
		first = new int[l];
		last = first;
	}

	void enqueue(int element)
	{
		*last = element;
		last++;
	}

	int dequeue()
	{
		int ret = *first;
		first++;
		return ret;
	}

	int peek()
	{
		return *first;
	}
};

int main()
{
	queue q(5);
	int a;
	for (int i=0;i<10; i++)
	{
		cin >> a;
		q.enqueue(a);
		cout << "enqueue operation successfull" << endl;
	}

	for (int i=0;i<10;i++)
	{
		cout << q.dequeue() << endl;
	}
}
