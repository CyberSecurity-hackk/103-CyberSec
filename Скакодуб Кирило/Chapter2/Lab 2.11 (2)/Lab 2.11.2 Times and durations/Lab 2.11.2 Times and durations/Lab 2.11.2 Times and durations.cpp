#include <iostream>
using namespace std;
int main()
{
    int h, m, h1, m1, hh, mm;
TryAgain:
    cout << "Enter begin hours: ";
    cin >> h;

    cout << "Enter begin minutes: ";
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

        cout << "Enter end hours: ";
        cin >> h1;

        cout << "Enter end minutes: ";
        cin >> m1;

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
            hh = h - h1;
            mm = m - m1;
            cout << hh << ":" << mm;
        }
    }
    cout << endl;
    cout << endl;
    system("pause");
    return 0;
}