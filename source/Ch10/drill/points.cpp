#include "../../std_lib_facilities.h"

class point
{
private:
	double xCoord;
	double yCoord;
public:
	double x() { return xCoord; }
	double y() { return yCoord; }
	point(double x, double y) { xCoord = x; yCoord = y;}
	void print_point() { cout << '(' << xCoord<< "," << yCoord << ')' << endl; }
};

void output_points(string filename, vector<point> vector)
{
	ofstream sw {filename};
	if (!sw) 
		{
			error("Can't open output file ", filename);
		}
	for (int i = 0; i < vector.size(); ++i)
	{
		sw << "Point" << i << ": " << '(' << vector[i].x() << "," << vector[i].y() << ')' << endl;
	}
}

void get_coords(string filename, vector<point>& vector)
{
	ifstream sr {filename};
	if (!sr) 
	{
		error("Can't open input file ", filename);
	}

	string line;
	string x;
	string y;
	double xDouble = 0;;
	double yDouble = 0;;
	int j = 0;
	int h = 0;

	while (true)
	{
		sr >> line >> line;
		if(sr.eof())
		{
			break;
		}

		int commaIndex;

		for (int i = 0; i < line.size(); ++i)
		{
			if (line[i] == ',')
			{
				commaIndex = i;
			}
		}

		for (int i = 1; i < commaIndex; ++i)
		{
			//cout << line[i];
			x.push_back(line[i]);
		}

		//cout << ',';

		for (int i = commaIndex + 1; i < line.size() - 1; ++i)
		{
			//cout << line[i];
			y.push_back(line[i]);
		}

		//cout << x << ',' << y << endl;

		xDouble = atof(x.c_str());
		yDouble = atof(y.c_str());

		//cout << xDouble << ',' << yDouble << endl;

		point point {xDouble, yDouble};
		vector.push_back(point);

		x = "";
		y = "";
		xDouble = 0;
		yDouble = 0;
	}
}

void vector_compare(vector<point> vector1, vector<point> vector2)
{
	if (vector1.size() != vector2.size())
	{
		cout << "The two vectors' size isn't the same, so are the values then." << endl;
	}
	for (int i = 0; i < vector1.size(); ++i)
	{
		if (vector1[i].x() != vector2[i].x())
		{
			cout << "Somehthing's wrong with the values!" << endl;
		}

		if (vector1[i].y() != vector2[i].y())
		{
			cout << "Somehthing's wrong with the values!" << endl;
		}
	}
	cout << "The two vectors are the same!" << endl;
}

int main()
{
	vector<point> original_points;
	original_points = { {354, 423}, {5, 6}, {1, 10}, {23, 5}, {6, 9}, {4, 20}, {32, 1} };

	for (int i = 0; i < original_points.size(); ++i)
	{
		cout << "Point" << i << ": ";
		original_points[i].print_point();
	}

	cout << "\nPlease enter the name and extension of the output file: ";
	string outputFile;
	cin >> outputFile;
	output_points(outputFile, original_points);

	
	cout << "Please enter input file name: ";
	string inputFile;
	cin >> inputFile;
	cout << endl;
	vector<point> processed_points;
	get_coords(inputFile, processed_points);
	
	for (int i = 0; i < processed_points.size(); ++i)
	{
		cout << "Point" << i << ": ";
		processed_points[i].print_point();
	}

	cout << endl;

	vector_compare(original_points, processed_points);

	return 0;
}