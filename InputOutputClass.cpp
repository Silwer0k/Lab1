#include "InputOutputClass.h"
#include <iostream>

using namespace std;

	double InputOutputClass::InputWidth(int k)
	{
		double width;
		do
		{
			cout << k + 1 << "# ¬ведите ширину: ";
			cin >> width;
		} while (width <= 0.0);
		return width;
	}

	double InputOutputClass::InputLength(int k)
	{
		double length;
		do
		{
			cout <<  k + 1 << "# ¬ведите длину: ";
			cin >> length;
		} while (length <= 0.0);
		cout << endl;
		return length;
	}

	double InputOutputClass::InputHeight(int k)
	{
		double height;
		do
		{
			cout << k + 1 << "# ¬ведите высоту: ";
			cin >> height;
		} while (height <= 0.0);
		return height;
	}

	double InputOutputClass::InputRadius(int k)
	{
		double r;
		do
		{
			cout << k + 1 << "# ¬ведите радиус: ";
			cin >> r;
		} while (r <= 0.0);
		cout << endl;
		return r;
	}