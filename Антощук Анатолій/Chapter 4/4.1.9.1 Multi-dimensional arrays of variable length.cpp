#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	float n, cu, gr, sum = 0, sumf = 0;
		double fin;

		cout << "How much Courses? ";
		cin >> n;
		cout << endl;

		if (n <= 5)
		{
			for (int i = 0; i < n; i++) 
			{
				cout << "Courses " << i + 1 << " grades: ";
				cin >> cu; 

				if (cu <= 10)
				{
					cout << "Enter " << cu << " marks:" << endl;
					for (int j = 0; j < cu; j++) 
					{
						cin >> gr; 
						
						if (gr <= 5)
							sum += gr; 
						else
						{
							cout << "Error, try again" << endl;
							break;
						}
					}

					fin = sum / cu;
					cout << "Final: " << fin << endl;
					sum = 0;

					sumf += fin;
				}
				else
				{
					cout << "Error, try again" << endl;
					break;
				}
			}

			cout << "Overall final: " << sumf / n << "\n\n";
		}
		
    return 0;
}
