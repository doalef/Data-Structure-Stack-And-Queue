// ConsoleApplication1.cpp : Defines the entry point for the console application.
// Done by @Doalef

#include "stdafx.h"
#include "stack.h"
#include "Queue.h"
#include <iostream>
using namespace std;


int main()
{
	stack s;
	double a;
	Queue q;
	int i;
	s.push(10);
	s.push(11);
	s.push(12);
	s.push(123);
	while (s.pop(a))
	{
		q.push(a);
		cout << a << ",";
	}
	cout << endl;
	int j;
	while (q.pop(j))
	{
		s.push(j);
		cout << j << ",";
	}
	cout << endl;
	while (s.pop(a))
	{
		q.push(a);
		cout << a << ",";
	}
	//cout << *s.pop(a) << endl;
	//cout << *s.pop(a) << endl;
	//cout << *s.pop(a) << endl;
	system("pause");
    return 0;
}

