#include "queue.h"

queue::queue(int l)
{
	size = 0;
	first = new int[l];
	last = first;
}

queue::queue()
{
	size = 0;
	first = new int[1];
	last = first;
}

void queue::enqueue(int element)
{
	*last = element;
	last++;
	size++;
}

int queue::dequeue()
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

int queue::peek()
{
	return *first;
}

int queue::length()
{
	return size;
}
