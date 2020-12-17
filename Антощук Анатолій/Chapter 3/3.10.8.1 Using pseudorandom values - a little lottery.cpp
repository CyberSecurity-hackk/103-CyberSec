#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void) {
	int maxball;
	int ballsno;

	cout << "Max ball number? ";
	cin >> maxball;
	cout << "How many balls? ";
	cin >> ballsno;

	unsigned int* randBall = new unsigned int[ballsno];

	srand(time(NULL));

	for (unsigned int i = 0; i < ballsno; i++)
	{
		int num = rand() % maxball + 1;
		randBall[i] = num;
		cout << randBall[i] << " ";
	}
	cout << endl;

	delete[] randBall;


	return 0;
}