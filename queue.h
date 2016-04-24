#ifndef QUEUE_H
#define QUEUE_H

class queue{
private:
	int size;
	int *first, *last;
public:
	queue(int);
	queue();
	void enqueue(int);
	int dequeue();
	int peek();
	int length();
};

#endif
