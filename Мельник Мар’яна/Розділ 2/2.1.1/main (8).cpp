#include <iostream>

using namespace std;

int main(void) {
    int year;
    cout << "Please, enter a year: ";
    cin >> year;
    
    if(year%4!=0){
        cout<< year <<" is a Common year";
    }
    else if(year%100!=0) {
        cout<< year <<" is a Leap year";
	}
	else if(year%400!=0) {
	    cout<< year <<" is a Common year";
	}
	else {
	    cout<< year << " is a Leap year";
	}
	
	return 0;
}