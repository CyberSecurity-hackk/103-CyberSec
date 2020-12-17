#include <iostream>

using namespace std;

int main(void) {
	int   sys;
	float m, ft, in;

	// Insert your code here
	cin >> sys; 
	if (sys = 0){cin>>m;ft = m * 3.28; in = m * 39.37;cout<<ft<<"`"<<in<<"``";}else
	if (sys = 1){cin>>ft;cin>>in;m=ft*0.3;m=in*0.02;cout<<m<<"m";}
	return 0;
}