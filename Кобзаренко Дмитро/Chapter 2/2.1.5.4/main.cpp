﻿#include <iostream>
using namespace std;
int main(void) {
int Yr, Mth, d;

cout<<"Enter year"<<endl;
cin>>Yr;
cout<<"Enter month"<<endl;
cin>>Mth;
cout<<"Enter day"<<endl;
cin>>d;

Mth-=2;
if(Mth<=0){
	Mth+=12;
	Yr--;
}
Mth=Mth*83/32;
Mth+=d;
Mth+=Yr;
Mth+=Yr/4;
Mth-=Yr/100;
Mth+=Yr/400;
Mth%=7;

cout<<Mth;

return 0;
}
