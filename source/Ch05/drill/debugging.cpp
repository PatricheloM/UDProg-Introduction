#include "../../std_lib_facilities.h"

int main()
try {

	//cout << "Success!\n"; //X

	//cout << "Success!\n"; //X
	
	//cout << "Success!" << endl; //X
	
	//cout << "Success!" << '\n'; //X
	
	//int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; //X
	
	//vector<int> v(10); v[5] = 7; if (v[5] == 7) cout << "Success!\n"; //X
	
	//if (true) cout << "Success!\n" ; else cout << "Fail!\n"; //X
	
	//bool c = false; if (!c) cout << " Success!\n " ; else cout << "Fail!\n"; //X
	
	//string s = "ape" ; bool c = "fool" < s; if (!c) cout << "Success!\n"; //X
	
	//string s = "ape" ; if (s != "fool" ) cout << "Success!\n"; //X
	
	//string s = "ape" ; if (s != "fool" ) cout << "Success!\n"; //X
	
	//string s = "ape" ; if (s != "fool" ) cout << "Success!\n"; //X
	
	//vector<char> v(5); for (int i = 0; i <v.size(); ++i) ; cout << "Success!\n"; //X
	
	//vector<char> v(5); for (int i = 0; i <v.size(); ++i) ; cout << "Success!\n"; //X
	
	//string s = "Success!\n"; for (int i = 0; i < s.size(); ++i) cout << s[i]; //X
	
	//if (true) cout << "Success!\n" ; else cout << "Fail!\n"; //X
	
	//int x = 2000; char c = x; if (c == char(2000)) cout << "Success!\n"; //X
	
	//string s = "Success!\n" ; for (int i = 0; i < s.size(); ++i) cout << s[i]; //X
	
	//vector<string> v(5); for (int i = 0; i < v.size(); ++i) ; cout << "Success!\n"; //X
	
	//int i = 0; int j = 9; while (i < 10) ++i; if (j<i) cout << "Success!\n"; //X
	
	//int x = 2; double d = 5 / (x - 1); if (d == 2 * (x + 0.5)) cout << "Success!\n"; //X
	
	//string s = "Success!\n" ; for (int i=0; i<=10; ++i) cout << s[i]; //X

	//int i = 0; int j = 0; while (i < 10) ++i; if (j < i) cout << "Success!\n"; //X
	
	//int x = 4; double d = 5/(x - 2); if (d == (x / 2) + 0.5) cout << "Success!\n";
	
	//cout << "Success!\n"; //X


return 0;
}

catch (exception& e) {
cerr << "error: " << e.what() << '\n';
return 1;
}

catch (...) {
cerr << "Oops: unknown exception!\n";
return 2;
}