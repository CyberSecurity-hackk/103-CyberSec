#include <iostream>
#include <math.h>

using namespace std;

int main(void) {
    float k = 3.14159265359;
    float x,y;
    cout << "Enter value for x: " << endl;
    cin >> x;
    y = (x * x) / (pow(k, 2)) * ((pow(x, 2) + 0.5)) *  ( 1+ (pow(x,2)) / (pow(k, 2 )* (pow( (x * x - 0.5), 2))));
    cout << "y = " << y;
    return 0;


}