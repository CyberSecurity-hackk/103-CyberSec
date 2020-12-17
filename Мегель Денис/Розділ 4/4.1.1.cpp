#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {

	float Courses, Grades, Marks, Sum = 0, Sumfin = 0;
	double fin;

	cout << "How much Courses? ";
	cin >> Courses;
	cout << endl;

	if (Courses <= 5)
	{
		for (int i = 0; i < Courses; i++)
		{
			cout << "Courses " << i + 1 << " grades: ";
			cin >> Grades;

			if (Grades <= 10)
			{
				cout << "Enter " << Grades << " marks:" << endl;
				for (int j = 0; j < Grades; j++)
				{
					cin >> Marks;

					if (Marks <= 5)
						Sum += Marks;
					else
					{
						cout << "Error, try again" << endl;
						break;
					}
				}

				fin = Sum / Grades;
				cout << "Final: " << fin << endl;
				Sum = 0;

				Sumfin += fin;
			}
			else
			{
				cout << "Error, try again" << endl;
				break;
			}
		}
	}

		cout << "Overall final: " << Sumfin / Courses << "\n\n";

		system("pause");
		return 0;
	}
	
