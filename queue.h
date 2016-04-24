#ifndef QUEUE_H
#define QUEUE_H

template <class T>
class queue{
private:
	int size, maxsize;
	T *first, *last;
public:
	queue(int l = 0);
	void enqueue(T);
	T dequeue();
	T peek();
	int length();
};

#endif
