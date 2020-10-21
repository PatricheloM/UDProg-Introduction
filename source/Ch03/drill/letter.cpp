#include "../../std_lib_facilities.h"

int main()
{
	string first_name;
	cout << "Enter the name of the person you want to write to: ";
	cin >> first_name;
	cout << "Dear " << first_name << ",\nHow are you? I am fine. I miss you. \n";

	string friend_name;
	char friend_sex = 0;

	cout << "Enter the name and sex ('f' or 'm') of your friend divided by a whitespace: ";
	cin >> friend_name >> friend_sex;

	cout << "Have you seen " << friend_name << " lately?" << endl;

	if (friend_sex == 'm')
	{
		cout << "If you see " + friend_name + " please ask him to call me.";
	}
	else if (friend_sex == 'f')
	{
		cout << "If you see " + friend_name + " please ask her to call me.";
	}
	else
	{
		simple_error("Gender must be f or m!");
	}

	int age;
	cout << "\nEnter the age of your friend: ";
	cin >> age;
	if (age <= 0 || age > 110)
	{
		simple_error("You are kidding!");
	}
	else if (age < 12)
	{
		cout << "Next year you will be ";
		cout << age + 1;
		cout << '!';
	}
	else if (age == 17)
	{
		cout << "Next year you will be able to vote!";
	}
	else if (age > 70)
	{
		cout << "I hope you are enjoying retirement!";
	}

	
	cout << "\nYours sincerely,\n" << endl << endl;
	return 0;
}