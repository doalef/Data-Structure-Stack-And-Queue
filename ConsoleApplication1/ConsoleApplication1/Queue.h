#pragma once
#include <iostream>
using namespace std;
class Queue
{
public:
	Queue();
	Queue(int s);
	int push(int d);
	int* pop(int &x);
	bool isEmpty();
	bool isFull();
	~Queue();
private:
	int front, rear;
	int size;
	int *Array;
};

