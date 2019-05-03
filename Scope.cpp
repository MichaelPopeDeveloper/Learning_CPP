#include "Scope.h"
using namespace std;

 void Scope()
{
	int total = 0;
	for (int i = 1; i <= 10; i++)
	{
		total += i;
		cout << "Value of total in loop: " << total << endl;
	}

	cout << "Value of total outside of loop: " << total << endl;
}