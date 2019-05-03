#include "Swap.h"

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

 void execSwap()
{
	int a = 1;
	int b = 2;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	swap(a, b);
	cout << "Swapped a: " << a << endl;
	cout << "Swapped b: " << b << endl;
}