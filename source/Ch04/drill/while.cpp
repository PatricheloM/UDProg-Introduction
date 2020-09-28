#include "../../std_lib_facilities.h"

int main()
{
	int a = 0;
	int b = 0;

	while (a != '|')
	{
		cout << "Enter two numbers divided by a whitespace! Enter '|' to end loop!\n";
		cin >> a;
		if (a == 0)
		{
		}
		else
		{
			cin >> b;
			cout << a << endl << b << endl << endl;
		}
	}

	return 0;
}