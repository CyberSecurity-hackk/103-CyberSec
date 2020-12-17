#include <iostream>

using namespace std;

int main(void) {
	float grossprice, taxrate, netprice, taxvalue;
	
	cout << "Enter a gross price: ";
	cin >> grossprice;
	cout << "Enter a tax rate: ";
	cin >> taxrate;
	
	netprice = grossprice - taxrate;
	taxvalue = taxrate;
	
	cout << "Net price: " << netprice << endl;
	cout << "Tax value: " << taxvalue << endl;
	return 0;
}