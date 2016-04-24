#include <iostream>
using namespace std;
#include "queue.h"
#include "queue.cpp"

int main()
{
	int n;
	cout << "Enter max length of queue (0 for unbounded) : ";
	cin >> n;
	cout << "Instructions \n+ <int> will enqueue\n- will dequeue\nl will return length of queue\np will peek\ne will exit the program" << endl;	
	char a;
	int b;
	queue<int> q(n);
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
