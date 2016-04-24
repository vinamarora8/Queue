#include <iostream>
using namespace std;
#include "queue.h"

int main()
{
	char a;
	int b;
	queue q(10);
	while (a != 'e')
	{
		cin >> a;
		if (a == '+')
		{
			cin >> b;
			q.enqueue(b);
		}
		else if (a == '-')
			cout << "Dequeue : " << q.dequeue() << endl;		
		else if (a == 'p')
			cout << "Peek : " << q.peek() << endl;
		else if (a == 'l')
			cout << "Length : " << q.length() << endl;
		else if (a == 'e')
			cout << "Exiting.." << endl;
		else
			cout << "Unknown Command" << endl;
	}
}
