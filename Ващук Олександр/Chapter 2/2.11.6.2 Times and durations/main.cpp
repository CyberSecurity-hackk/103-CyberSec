#include <iostream>

using namespace std;

struct TIME
{
    int h;
    int m;
};

int main()
{
    TIME s,e,d;
    
    cout << "Enter s.h: ";
    cin >> s.h;
    
    cout << "Enter s.m: ";
    cin >> s.m;
    
    cout << "Enter e.h: ";
    cin >> e.h;
    
    cout << "Enter e.m: ";
    cin >> e.m;
    
    if(e.m < s.m)
    {
        d.h = e.h - s.h - 1;
        d.m = 60 + e.m - s.m;
    }
    else
    {
        d.h = e.h - s.h;
        d.m = e.m - s.m;
    }
    cout << d.h << ":" << d.m << endl;
    return 0;
}
