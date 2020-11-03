#include <iostream>

using namespace std;

int main() {
	int matrix[][4] = { { 1, 2, 3, 4 },
	{ 2, 2, 3, 1 },
	{ 3, 3, 3, 2 },
	{ 4, 1, 2, 1 } };
	int side = sizeof(matrix[0]) / sizeof(matrix[0][0]);
	bool issymmetric = true;

	int v1[10], v2[10], v3 = 0, v4 = 0;

	for (int i = 0; i < side; i++)
		for (int j = 0; j < side; j++)
			if (i > j)
			{
				v1[v3] = matrix[i][j]; cout << v1[v3] << "\t";
				++v3;
			}
	cout << endl;

	for (int i = 0; i < side; i++)
		for (int j = 0; j < side; j++)
			if (i < j)
			{
				v2[v4] = matrix[i][j]; cout << v2[v4] << "\t";
				++v4;
			}
	cout << endl;

	for (int i = 0; i < v3; i++)
	{
		if (v2[i] == v1[i])
			issymmetric = true;
		else
		{
			issymmetric = false;
			break;
		}
	}

	if (issymmetric == true)
		cout << "The matrix is symmetric" << endl;
	else
		cout << "The matrix is not symmetric" << endl;
	system("pause");
}