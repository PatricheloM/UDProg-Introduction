#include "../../std_lib_facilities.h"

double a = 0;
double smallest = std::numeric_limits<double>::max();
double largest = std::numeric_limits<double>::min();

void largest_smallest()
{
	if (a > largest)
	{
		largest = a;
		cout << "Largest so far: " << largest << endl;

	}
	if (a < smallest)
	{
		smallest = a;
		cout << "Smallest so far: " << smallest << endl;
	}
}

int main()
{
	while (cin >> a)
	{
		largest_smallest();
	}

	return 0;
}