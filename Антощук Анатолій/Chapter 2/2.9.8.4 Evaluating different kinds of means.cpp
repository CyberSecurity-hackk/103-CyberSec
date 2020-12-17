#include <iostream>
#include <cmath>

using namespace std;

int main(void) {

	double vector[] = { 1., 2., 3., 4., 5. };
	int n = sizeof(vector) / sizeof(vector[0]);
	double ArithmeticMean;
	double HarmonicMean;
	double GeometricMean;
	double RootMeanSquare;

	for (int i = 0; i < 5; i++)
	{
		sum += a[i];
		sum1 += 1 / a[i];
		d *= a[i];
		sum2 += pow(a[i], 2);
	}
	ArithmeticMean = sum / n;
	HarmonicMean = n / sum1;
	GeometricMean = pow(d, 0.2);
	RootMeanSquare = sqrt(sum2 / n);


	cout << "Arithmetic Mean = " << ArithmeticMean << endl;
	cout << "Harmonic Mean   = " << HarmonicMean   << endl;
	cout << "Geometric Mean  = " << GeometricMean  << endl;
	cout << "RootMean Square = " << RootMeanSquare << endl;

	cout << endl;
	return 0;
}
