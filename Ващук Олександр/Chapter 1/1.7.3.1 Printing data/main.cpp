﻿#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
float x1 = 2.3;
float x2 = 2.3;
float x3 = 2.123456;
float x4 = 2.123456;
float x5 = 2.123456;
    
    
    
    cout << x1 << endl;
    cout << fixed << setprecision(2)<<x2<<endl;
    cout << setprecision(6)<< x3 << endl;
	cout << setprecision(2)<< x4 << endl;
	cout << setprecision(0)<< x5 << endl;
	
	return 0;
}