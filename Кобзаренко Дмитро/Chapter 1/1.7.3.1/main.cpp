﻿#include <iostream>
#include <iomanip>
using namespace std;

int main() 

{
	float t1 = 2.3;
	
	float t2 = 2.3;
	
	float t3 = 2.123456;
	
	float t4 = 2.123456;
	
	float t5 = 2.123456;
	
	cout<< t1<<endl;
	
	cout<< fixed <<setprecision(2)<<t2<<endl;
	cout << setprecision(6)<< t3 << endl;
	cout << setprecision(2)<< t4 << endl;
	cout << setprecision(0)<< t5 << endl;
	return 0;
}
