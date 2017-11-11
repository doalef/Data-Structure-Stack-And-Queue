#include "stdafx.h"
#include "stack.h"
#include <iostream>
using namespace std;


stack::stack()
{
	top = -1;
	maxSize = 10;
	Array = new double[maxSize];
}


stack::~stack()
{
}

stack::stack(int m)
{
	top = -1;
	maxSize = m;
	Array = new double[maxSize];
}

bool stack::isEmpty() {
	return top == (maxSize - 1);
}

int stack::push(double d) {
	if (top != (maxSize - 1)) {
		Array[top] = d;
		//cout << "d= " << Array[top] << endl;
		top++;
		return 1;
	}
	else {
		return -1;
	}
}

double * stack::pop(double &x) {
	if (top == -1)
	{
		return 0;
	}
	x = Array[--top];
	return &x;
}