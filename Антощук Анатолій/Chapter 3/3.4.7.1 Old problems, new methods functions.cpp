#include<iostream>
using namespace std;

bool isLeap(int year) { 

	if(isLeap(year%4)){true;}else
	if(isLeap(year%100)){false;}else
	if(isLeap(year%400)){true;}else
	false;
	

}

int main(void) {

	for(int yr = 1995; yr < 2017; yr++) {
		cout << yr << " -> " << isLeap(yr) << endl;}
	return 0;
}