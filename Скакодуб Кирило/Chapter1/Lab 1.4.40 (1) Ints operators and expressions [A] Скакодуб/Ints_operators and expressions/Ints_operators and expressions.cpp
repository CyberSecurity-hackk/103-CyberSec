#include <iostream>
using namespace std;
int main(void) {
	int i, j, k;
	cout << "Enter i: ";
	cin >> i;
	cout << "Enter j: ";
	cin >> j;
	i = i + 2;	// увеличиваем i на 2
	j = j - i;	// уменьшаем j на i
	k = i / j;	// делим i на j, получая k
	k = k + k;	// увеличиваем k на k
	k = k - 1;	// уменьшаем k на 1
	k = i % j;	// присваиваем k по модулю i к j
	k = k + (k + i);	// увеличиваем k на k, добавляемое к i
	k = k + (k / 3);	// увеличиваем k на k деленное на j
	k = pow(pow(k, k), k);	// присвоить k раз k раз k к k
	k = pow((k + i), 2);	// увеличиваем k на i раз j
	cout << k;
	return 0;
}
