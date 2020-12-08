#include "../../std_lib_facilities.h"

int ga[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

void f(int array[], int size)
{
	int la[size];
	cout << "la ints: ";
	for (int i = 0; i < size; ++i)
	{
		la[i] = array[i];
		cout << la[i] << ' ';
	}
	cout << endl;

	int* p = new int[size];
	cout << "allocated ints: ";
	for (int i = 0; i < size; ++i)
	{
		p[i] = la[i];
		cout << p[i] << ' ';
	}
	cout << endl;

	delete p;
}

int main()
{
	cout << "Binary array: " << endl;
	f(ga, 10);

	cout << "Factorial array: " << endl;
	int aa[10];
	aa[0] = 1;
	for (int i = 1; i < 10; ++i)
	{
		aa[i] = aa[i-1]*(i+1);
	}
	f(aa, 10);

	return 0;
}