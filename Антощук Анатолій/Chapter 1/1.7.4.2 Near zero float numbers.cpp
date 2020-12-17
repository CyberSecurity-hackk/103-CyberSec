#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Введите первое и второе числа:";
    cin >> a;
    cin >> b;
    cout << a << "  " << b << endl;
    if (a == b){cout << "Числа совпадают" << endl;} else if (a != b) {cout << "Числа не совпадают" << endl;}
    return 0;
}