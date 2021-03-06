#include <iostream>
#include <cmath>

using namespace std;

// Insert your functions here
void increment(int* var) 
{
	*var++;
}

void increment(int* var, int i) 
{
	*var += i;
}

void increment(float& floatVar) 
{
	floatVar++;
}

void increment(float& floatVar, int intVar) 
{
	floatVar += intVar;
}
int main(void) {
	int intvar = 0;
	float floatvar = 1.5;
	for (int i = 0; i < 10; i++)
		if (i % 2) {
			increment(&intvar);
			increment(floatvar, sqrt(intvar));
		}
		else {
			increment(&intvar, i);
			increment(floatvar);
		}
		cout << intvar * floatvar << endl;

		system("pause");
		return 0;
}