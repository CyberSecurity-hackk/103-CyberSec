﻿#include <iostream>
using namespace std;
int main(void) {
  bool answer;
  int value;
  cout << "Enter a value: ";
  cin >> value;
  cout << "\t" << value << "\n";
  if ((10 > value && value > -1) ||((20 > (value * 2)) && ((value - 2) > -2)) || (((value - 1) > 1) && ((value / 2) < 10)) || (value == 111))
{
    answer = true;
}
    else {
    answer = false;
    }
    cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
return 0;
}