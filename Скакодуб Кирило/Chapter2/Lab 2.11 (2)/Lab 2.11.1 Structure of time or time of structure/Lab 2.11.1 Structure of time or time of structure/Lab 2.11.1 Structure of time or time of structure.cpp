#include <iostream>
using namespace std;
int main()
{
    int h, m;
    TryAgain:
    cout << "Enter hours: ";
    cin >> h;
   
    cout << "Enter minutes: ";
    cin >> m;

    if (h > 24) {
        cout << "|E_R_R_O_R|";
        cout << endl;
        cout << endl;
        goto TryAgain;
    }
    else if (m > 60) {
        cout << "|E_R_R_O_R|";
        cout << endl;
        cout << endl;
        goto TryAgain;
    }
    else {
        cout << h << ":" << m;
    }
    cout << endl;
    cout << endl;
    system("pause");
    return 0;
}