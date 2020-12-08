#include "../../std_lib_facilities.h"

vector<int> gv = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

void f(vector<int> v)
{
	vector<int> lv;
	cout << "lv ints: ";
	for (int i = 0; i < v.size(); ++i)
	{
		lv.push_back(v[i]);
		cout << lv[i] << ' ';
	}
	cout << endl;

	vector<int> lv2 = v;
	cout << "lv2 ints: ";
	for (auto a : lv2)
	{
		cout << a << ' ';
	}
	cout << endl;
}

int main()
{
	cout << "Binary vector: " << endl;
	f(gv);

	cout << "Factorial vector: " << endl;
	vector<int> vv;
	vv.push_back(1);
	for (int i = 1; i < 10; ++i)
	{
		vv.push_back(vv[i-1]*(i+1));
	}
	f(vv);

	return 0;
}