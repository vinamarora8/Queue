#ifndef QUEUE_H
#define QUEUE_H

class queue{
private:
	int size;
	int *first, *last;
public:
	queue(int);
	void enqueue(int);
	int dequeue();
	int peek();
};

#endif
