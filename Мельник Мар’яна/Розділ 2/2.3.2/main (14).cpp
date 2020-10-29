#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long n;
    
    cout << "Number of interactions: ";
    cin >> n;
    double *a = new double[n];
    double Pi = 0;
    for (int i = 0; i < n; i++)
    a[i] = pow(-1, i) / (2 * i + 1);
    for (int i = 0; i < n; i++)
    Pi += 4 * a[i];
    
    cout << "Pi = " << Pi << endl;
}