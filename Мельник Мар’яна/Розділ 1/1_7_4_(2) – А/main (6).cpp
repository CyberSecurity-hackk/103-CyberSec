﻿#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    
 float eps = 0.000001;
	float x, y;
	
	cout << "enter x: ";
	cin>>x;
	cout << "enter y: "; 
	cin>>y;
	cout<< (((1/x-1/y<=eps)&&(1/x-1/y>=-eps))?"Results are equal":"Results are not equal")<<" (by "<<fixed<<eps<< " epsilon)" ;

	
	return 0;
}