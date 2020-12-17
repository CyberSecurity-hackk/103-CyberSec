#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Square
{
private:
	double side;
	double area;

public:
	void set_data(double* side)
	{
		this->side = *side;
		area = this->side * this->side;
	}

	void print()
	{
		cout << "Square: side = " << side << " area = " << area << endl;
	}
};

int main()
{
	Square s(4);
	print("square);
		s.side = 2.0;
	print("square);
		s.side = -33.0;
	print("square);

		system("pause");
		return 0;
}


