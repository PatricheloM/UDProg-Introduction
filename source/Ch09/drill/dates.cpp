#include "../../std_lib_facilities.h"

class date
{
private:
	int year;
	int month;
	int day;
public:
	void print_date() {	cout << "Date: " << year << '.' << month << '.' << day << '.' << endl; }
	date(int y, int m, int d);
	void add_day(int n);
	int get_year() { return year; }
	int get_month() { return month; }
	int get_day() { return day; }
};

enum month {jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};

date::date(int y, int m, int d)
{
	if (y > 0)
	{
		year = y;
	}
	else
	{
		error("Invalid year!");
	}

	if (m > 0 && m <= 12)
	{
		month = m;
	}
	else
	{
		error("Invalid month!");
	}

	switch (month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if (d > 0 && d <= 31)
			{
				day = d;
			}
			else
			{
				error("Invalid day!");
			}
			break;

		case 4: case 6: case 9: case 11:
			if (d > 0 && d <= 30)
			{
				day = d;
			}
			else
			{
				error("Invalid day!");
			}
			break;

		case 2:
			if (d > 0 && d <= 28)
			{
				day = d;
			}
			else
			{
				error("Invalid day!");
			}
			break;
	}
}

void date::add_day(int n)
{
	for (int i = 0; i < n; ++i)
	{
		switch (month)
		{
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				if (day > 0 && day < 31)
				{
					day++;
				}
				else if (day == 31)
				{
					if (month != 12)
					{
						month++;
					}
					else if (month == 12)
					{
						year++;
						month = 1;
					}
					day = 1;
				}
				break;

			case 4: case 6: case 9: case 11:
				if (day > 0 && day < 30)
				{
					day++;
				}
				else if (day == 30)
				{
					if (month != 12)
					{
						month++;
					}
					else if (month == 12)
					{
						year++;
						month = 1;
					}
					day = 1;
				}
				break;

			case 2:
				if (day > 0 && day < 28)
				{
					day++;
				}
				else if (day == 28)
				{
					if (month != 12)
					{
						month++;
					}
					else if (month == 12)
					{
						year++;
						month = 1;
					}
					day = 1;
				}
				break;
		}
	}
}

int main()
{

	date today {2020, 10, 1};
	today.print_date();

	today.add_day(92);
	today.print_date();

	return 0;
}