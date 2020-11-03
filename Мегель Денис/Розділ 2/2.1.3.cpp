#include <iostream>

using namespace std;

int main(void) {
	int sys;
	float m, ft, in;
	cout << "Choose system: 0 - metric 1 - imperial";
	cin >> sys;

	if (sys == 0)
	{
		cin >> in;
		m = in / 3.28084;
		cout << m << " m";
	}
	else
	{
		cin >> in;
		ft = in * 3.28084;
		cout << ft;
	}

	cout << endl;
	system("pause");
	return 0;
}