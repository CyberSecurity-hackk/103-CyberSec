﻿#include <iostream>
using namespace std;

int main(void)

{
    int Year;
	cout << "Enter year: ";
	cin >> Year;
	
	if(Year%4!=0){
		cout<<"Common year"<<endl;
	}
	
	else if(Year%100!=0)
	{
		cout<<"Leap year"<<endl;
	}
	
	else if(Year%400!=0)
	{
		cout<<"Common year"<<endl;
	}
	else
	{
		cout<<"Leap year"<<endl;
	}
	
	return 0;
}
