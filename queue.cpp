#include "queue.h"
#include <iostream>

template <class T>
queue<T>::queue(int l)
{
	size = 0;
	maxsize = l;
	first = new T[l];
	last = first;
}

template <class T>
void queue<T>::enqueue(T element)
{	
	if (maxsize == 0 | size < maxsize)
	{	
		*last = element;
		last++;
		size++;
	}
	else
	{
		std::cout << '\a';
	}
}

template <class T>
T queue<T>::dequeue()
{
	if (size > 0)
	{	
		int ret = *first;
		int *ptr = first;
		while (ptr != last)
		{
			*ptr = *(ptr+1);
			ptr++;
		}
		last--;
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
