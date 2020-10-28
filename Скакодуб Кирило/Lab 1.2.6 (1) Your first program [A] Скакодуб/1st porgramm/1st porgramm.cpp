#include <iostream>
#include <locale.h>
using namespace std;
int main(void) {
	setlocale(LC_ALL, "Russian");
	cout << "Привет! :D\n";
	cout << "И тебе привет! ;)" << endl;
	cout << endl;
	cout << "Эт я, твоя первая программа!" << endl;
	return 0;
}
