#include "../../std_lib_facilities.h"

double number = 0;
int mesureInt = 0;
string mesure;
constexpr double m_per_cm = 100;
constexpr double in_per_cm = 2.54;
constexpr double ft_per_in = 12;
vector<double> numberSum;
double smallest = numeric_limits<double>::max();
double largest = numeric_limits<double>::lowest();


void largest_smallest()
{
	if (numberSum[numberSum.size() - 1] > largest)
	{
		largest = numberSum[numberSum.size() - 1];
		cout << "The largest so far: " << numberSum[numberSum.size() - 1] << 'm' << endl;
	}
	else if (numberSum[numberSum.size() - 1] < smallest)
	{
		smallest = numberSum[numberSum.size() - 1];
		cout << "The smallest so far: " << numberSum[numberSum.size() - 1] << 'm' << endl;
	}
}


int main()
{
	cout << "Enter a number and its unit!" << endl;

	while (cin >> number >> mesure) // cm ~ 1; m ~ 2; in ~ 3; ft ~ 4
	{
		if (mesure == "cm")
		{
			mesureInt = 1;
		}
		else if (mesure == "m")
		{
			mesureInt = 2;
		}
		else if (mesure == "in")
		{
			mesureInt = 3;
		}
		else if (mesure == "ft")
		{
			mesureInt = 4;
		}

		switch (mesureInt)
		{
			case 1:
				numberSum.push_back(number / m_per_cm);
				largest_smallest();
				break;

			case 2:
				numberSum.push_back(number);
				largest_smallest();
				break;

			case 3:
				numberSum.push_back(number / m_per_cm * in_per_cm);
				largest_smallest();
				break;

			case 4:
				numberSum.push_back(number / m_per_cm * in_per_cm * ft_per_in);
				largest_smallest();
				break;

			default:
				cout << "Illegal unit! Only meter, centimeter, inch or feet is allowed!" << endl;
				break;
		}

	}
	double sum = 0;
	for (double x : numberSum)
	{
		sum += x;
	}
	cout << "The sums in order: " << endl;
	sort(numberSum);
	for (double y : numberSum)
	{
		cout << y << 'm' << endl;
	}
	cout << sum << "m is the sum of the units." << endl;
	cout << "Smallest: " << numberSum[0] << 'm' << endl;
	cout << "Largest: " << numberSum[numberSum.size() - 1] << 'm' << endl;
	return 0;
}