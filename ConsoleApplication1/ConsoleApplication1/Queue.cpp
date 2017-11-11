#include "stdafx.h"
#include "Queue.h"


Queue::Queue()
{
	size = 10;
	rear = -1;
	front = -1;
	Array = new int[size];
}

Queue::Queue(int s) {
	size = s;
	rear = -1;
	front = -1;
	Array = new int[size];
}

Queue::~Queue()
{
}


bool Queue::isEmpty() {
	return (front == -1);
}

bool Queue::isFull() {
	return (rear == size-1);
}

int Queue::push(int d) {
	if (rear != (size - 1)) {
		Array[++rear] = d;
		if (isEmpty()) {
			front = 0;
		}
		return 1;
	}
	else {
		return -1;
	}
}

int* Queue::pop(int &x) {
	if (isEmpty())
		return NULL;
	else
	{
		x = Array[front];
		if (front == rear)
		{
			front = -1;
			rear = -1;
		}
		else
			front++;
		return &x;
	}
}