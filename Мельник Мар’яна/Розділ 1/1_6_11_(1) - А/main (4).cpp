#include <iostream>

using namespace std;

int main(void) {
    bool answer;
    int value;
    cout << "Enter a value: ";
    cin >> value;
    
    if ((10 > value && value > -1)|| ((20 > (value * 2)) && ((value - 2) > -2))||  (((value - 1) > 1) && ((value / 2) < 10)) || (value == 111))
{
    answer = true;
    cout << "THAT`S TRUE :)" << endl;
}
    else {
        answer = false;
        cout << "THAT`S NOT TRUE :(" << endl;
    }
    
	return 0;
}