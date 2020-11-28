#include "../../std_lib_facilities.h"

int main()
{
	int birth_year = 2001;
	cout << "Decimal:\t" << birth_year << endl;
	cout << "Hexadecimal:\t" << hex << birth_year << endl;
	cout << "Octal:\t\t" << oct << birth_year << endl;

	cout << endl << "Fixed:\t\t" << dec << birth_year << endl << endl;

	cout << showbase;
	cout << "Decimal (base):\t\t" << birth_year << endl;
	cout << "Hexadecimal (base):\t" << hex << birth_year << endl;
	cout << "Octal (base):\t\t" << oct << birth_year << endl;

	cout << noshowbase << dec << endl;

	//-----------------------------------------------------------

	int a, b, c;

	cin >> a >> oct >> b >> hex >> c;
	cout << a << '\t' << b << '\t' << c << endl << endl;

	//-----------------------------------------------------------

	cout << "Default float:\t" << defaultfloat << 1234567.89 << endl;
	cout << "Fixed float:\t" << fixed << 1234567.89 << endl;
	cout << "Scientific:\t" << scientific << 1234567.89 << endl << defaultfloat << endl;

	//-----------------------------------------------------------

	cout << '|' << setw(8) << "Patrik" << '|' << setw(8) << "Kun" 
	<< '|' << setw(24) << "kunpatrik00@gmail.com"
	<< '|' << setw(16) << "+36 70 359-1491" << "|\n"
	<< '|' << setw(8) << "Teszt" << '|' << setw(8) << "Elek"
	<< '|' << setw(24) << "tesztelek@example.com"
	<< '|' << setw(16) << "+36 70 555-4321" << "|\n"
	<< '|' << setw(8) << "Kira" << '|' << setw(8) << "Kata"
	<< '|' << setw(24) << "kirakata@example.com"
	<< '|' << setw(16) << "+36 70 111-2345" << "|\n";


	return 0;
}