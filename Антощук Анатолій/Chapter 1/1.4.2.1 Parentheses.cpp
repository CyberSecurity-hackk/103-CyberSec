#include <iostream>
#include <iomanip>
#include <string>

int main()
{
  float v=2;
  float result = v + 1 * 4;
  std::cout << "result:  " << result <<  "  expected result :  6" << std::endl;
  result = v + 3 * v + 4 * 4;
  std::cout << "result: " << result <<  "  expected result : 24" << std::endl;
  result = v - 1 * 2 + 2 * 3;
  std::cout << "result:  " << result <<  "  expected result :  6" << std::endl;
  result = v + v * v + v * 13;
  std::cout << "result: " << result <<  "  expected result : 32" << std::endl;
  result = (int)v % 1 * v + 2 * 0;
  std::cout << "result:  " << result <<  "  expected result :  0" << std::endl;
}