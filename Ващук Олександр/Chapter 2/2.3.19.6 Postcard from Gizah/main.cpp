﻿#include <iostream>
using namespace std;

int main(void) 
{
	int k;
	cout<<"Enter count stars 2<h<9: "<<endl;
	cin>> k;
	
	if(k<=2||k>=9)
	cout<<"Error, wrong input number"<<endl;
	 
	 else  
	{
	int Length = 55;
	int count = 16;
	for(int h = 0;h<k;h++){
		for(int i = 1;i<=Length;i++)
		
		{
			if(k-1==h&&((i>count-k&&i<count+k)||(i>2*count-k&&i<2*count+k)||
			  (i>3*count-k&&i<3*count+k))||((i-h)%count==0&&i>8)||
			  ((i+h)%count==0&&i>8))
			{
				cout<<"*";
			}
			else{
				cout<<" ";
			}
				
		}
		cout<<""<<endl;
	}
	
}
	return 0;
}