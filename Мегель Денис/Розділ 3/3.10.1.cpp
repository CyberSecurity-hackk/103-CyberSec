#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void) {
	int maxball;
	int ballsno;
	int num;
	cout << "Max ball number? ";
	cin >> maxball;
	cout << "How many balls? ";
	cin >> ballsno;
	int* randBall = new int[ballsno];
	srand(time(NULL));
	// Insert your code here
	for (unsigned int i = 0; i < ballsno; i++)
	{
		num = rand() % maxball + 1;
		randBall[i] = num;
		cout << randBall[i] << " ";
	}
	cout << endl;

	delete[] randBall;

	system("pause");
	return 0;
}