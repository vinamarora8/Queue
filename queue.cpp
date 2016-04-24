#include "queue.h"

queue::queue(int l)
{
	size = l;
	first = new int[l];
	last = first;
}

void queue::enqueue(int element)
{
	*last = element;
	last++;
}

int queue::dequeue()
{
	int ret = *first;
	first++;
	return ret;
}

int queue::peek()
{
	return *first;
}
