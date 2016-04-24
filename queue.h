#ifndef QUEUE_H
#define QUEUE_H

template <class T>
class queue{
private:
	int size;
	T *first, *last;
public:
	queue(int);
	queue();
	void enqueue(T);
	T dequeue();
	T peek();
	int length();
};

#endif
