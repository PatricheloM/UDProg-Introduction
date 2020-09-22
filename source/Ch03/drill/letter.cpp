#include "../../std_lib_facilities.h"

int main()
{
	string first_name;
	cout << "Enter the name of the person you want to write to: ";
	cin >> first_name;
	cout << "Dear ";
	cout << first_name;
	cout << ", \nHow are you? I am fine. I miss you. \n";

	return 0;
}