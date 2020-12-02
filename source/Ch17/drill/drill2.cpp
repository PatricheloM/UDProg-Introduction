#include "../../std_lib_facilities.h"

class allocated_vector 
{
private:
	int SIZE;
	int* value;

public:
	allocated_vector(int size) :SIZE(size), value{new int[size]}
	{
		for (int i = 0; i < size; ++i)
		{
			value[i] = 0;
		}
	}
	~allocated_vector() { delete[] value; }

	int size() const { return SIZE; }
	int get(int n) const { return value[n]; }
	void set(int n, int newValue) { value[n] = newValue; }
	void print() 
	{ 
		cout << "Integers are (" << SIZE << "): ";
		for (int i = 0; i < SIZE; ++i)
		{
			cout << value[i];
			if (i != SIZE - 1)
			{
				cout << ", ";
			}
			else if (i == SIZE - 1)
			{
				cout << endl;
			}
		}
	}
	void print_vector(string filename)
	{
		ofstream sw {filename};
		if (!sw) 
		{
			error("Can't open output file", filename);
		}
		for (int i = 0; i < SIZE; ++i)
		{
			sw << value[i] << endl;
		}
	}
};

int main()
{
	allocated_vector* integers10 = new allocated_vector(10);

	allocated_vector* integers11 = new allocated_vector(11);

	allocated_vector* integers20 = new allocated_vector(20);

	for (int i = 0; i < integers10->size(); ++i)
	{
		integers10->set(i, 100 + i);
	}

		for (int i = 0; i < integers11->size(); ++i)
	{
		integers11->set(i, 100 + i);
	}

		for (int i = 0; i < integers20->size(); ++i)
	{
		integers20->set(i, 100 + i);
	}

	integers10->print_vector("print_vector10.txt");

	integers11->print_vector("print_vector11.txt");

	integers20->print_vector("print_vector20.txt");

	integers10->print();

	integers11->print();

	integers20->print();

	delete integers10;

	delete integers11;

	delete integers20;

	return 0;
}