﻿#include <iostream>
using namespace std;
int main(void) {
 float valcost, stnal, netprice, nalst;
 cout << "Enter a gross price: ";
 cin >> valcost;
 cout << "Enter a tax rate: ";
 cin >> stnal;
  if(valcost>0&&stnal>0&&stnal<100)
{
    netprice = valcost/((100+stnal)/100);
     nalst = valcost - netprice;
    cout << "Net price: " << netprice << endl;
    cout << "Tax value: " << nalst << endl;
}
else
	cout<<endl<<"incorect input data";
return 0;
}
