#pragma once
class stack
{
public:
	stack();
	stack(int m);
	~stack();
	int push(double d);
	bool isEmpty();
	double * pop(double &x);

private:
	int maxSize;
	int top;
	double *Array;
};

