#include "../../std_lib_facilities.h"

	double a = 0;
	double b = 0;
	double smallest = std::numeric_limits<double>::max();
	double largest = std::numeric_limits<double>::min();

void largest_smallest()
{
	if (a > largest)
	{
		largest = a;
	}
	else if (a < smallest)
	{
		smallest = a;
	}

	if (b > largest)
	{
		largest = b;
	}
	else if (b < smallest)
	{
		smallest = b;
	}
}



int main()
{
	while (cin >> a >> b)
	{
		if (a < b)
		{
			cout << "The smaller value is: " << a << endl;
			smallest = a;
			cout << "The larger value is: " << b << endl;
			if (abs(a - b) < 0.01)
			{
				cout << "The numbers are almost equal." << endl;
			}
			largest_smallest();
			cout << "Largest so far: " << largest << endl;
			cout << "Smallest so far: " << smallest << endl;
		}
		else if (a > b)
		{
			cout << "The smaller value is: " << b << endl;
			smallest = b;
			cout << "The larger value is: " << a << endl;
			if (abs(a - b) < 0.01)
			{
				cout << "The numbers are almost equal." << endl;
			}
			largest_smallest();
			cout << "Largest so far: " << largest << endl;
			cout << "Smallest so far: " << smallest << endl;

		}
		else if (a == b)
		{
			cout << "The numbers are equal.\n";
			largest_smallest();
			cout << "Largest so far: " << largest << endl;
			cout << "Smallest so far: " << smallest << endl;
		}
	}

	cout << endl;
	return 0;
}