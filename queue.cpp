#include "queue.h"

template <class T>
queue<T>::queue(int l)
{
	size = 0;
	first = new T[l];
	last = first;
}

template <class T>
queue<T>::queue()
{
	size = 0;
	first = new T[1];
	last = first;
}

template <class T>
void queue<T>::enqueue(T element)
{
	*last = element;
	last++;
	size++;
}

template <class T>
T queue<T>::dequeue()
{
	if (size > 0)
	{	
		int ret = *first;
		first++;
		size--;
		return ret;
	}
	else 
		return 0;
}

template <class T>
T queue<T>::peek()
{
	return *first;
}

template <class T>
int queue<T>::length()
{
	return size;
}
