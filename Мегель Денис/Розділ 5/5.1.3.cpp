#include "stdafx.h"
#include <iostream>

using namespace std;

class AdHocSquare
{
private:
	double side;
public:
	AdHocSquare(double side)
	{
		this->side = side;
	}
	void set_side(double side)
	{
		this->side = side;
	}
	double get_area()
	{
		return side * side;
	}
};
class LazySquare
{
private:
	double side;
	double area;
	bool side_changed;
public:
	void set_side(double side)
	{
		this->side = side;
		side_changed = true;
	}
	LazySquare(double side)
	{
		this->side = side;
		side_changed = false;
		area = side * side;
	}
	double get_area()
	{
		area = side * side;
		side_changed = false;
		return area;
	}
};

int main()
{
	AdHocSquare ahs = AdHocSquare(5);
	LazySquare ls = LazySquare(4);

	cout << "AdHocSquare area = " << ahs.get_area() << endl;
	cout << "LazySquare area = " << ls.get_area() << endl;

	ahs.set_side(6);
	ls.set_side(5);

	cout << "AdHocSquare area = " << ahs.get_area() << endl;
	cout << "LazySquare area = " << ls.get_area() << endl;

	return 0;
}