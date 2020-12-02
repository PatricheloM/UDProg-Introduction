#include "../../std_lib_facilities.h"

void coutInts(int* integers, int n)
{
	cout << "Integers are (" << n << "): ";
	for (int i = 0; i < n; ++i)
	{
		cout << integers[i];
		if (i != n - 1)
		{
			cout << ", ";
		}
		else if (i == n - 1)
		{
			cout << endl;
		}
	}
}


void print_array(int* a, int n, string filename)
{
	ofstream sw {filename};
	if (!sw) 
		{
			error("Can't open output file", filename);
		}
	for (int i = 0; i < n; ++i)
	{
		sw << a[i] << endl;
	}

	sw.close();
}

int main()
{
	int* integers10 = new int[10] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};

	int* integers11 = new int[11] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};

	int* integers20 = new int[20] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119};

	coutInts(integers10, 10);

	coutInts(integers11, 11);

	coutInts(integers20, 20);

	print_array(integers10, 10, "print_array10.txt");

	print_array(integers11, 11, "print_array11.txt");

	print_array(integers20, 20, "print_array20.txt");

	delete[] integers10;

	delete[] integers11;

	delete[] integers20;

	return 0;
}