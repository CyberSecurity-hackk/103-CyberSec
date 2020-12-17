#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

bool iscapital(char x)
{
	if (x >= 'A' && x <= 'Z')
		return true;

	else
		return false;
}


int main()
{
	string pattern, sub[50], sentence;
	char as;
	int lng, count = 0;
	long int a;

	cout << "Enter pattern's symbol: ";
	cin >> as;
	cout << "Enter pattern's lenght: ";
	cin >> lng;

	if ((as == 'A' || as == 'D' || as == '?') && lng <= 10)
	{
		pattern.assign(lng, as);

		cout << "Enter the sentence: ";
		cin.ignore();
		getline(cin, sentence);

		if (as == 'A' || as == 'D')
			for (int i = 0; i < sentence.length(); i++)
			{
				if ((sentence[i] == ' ' && sentence[i + lng + 1] == ' ') || (sentence[i] == ' ' && sentence[i + lng + 1] == NULL))
				{
					sub[count] = sentence.substr((i + 1), (i + lng - 1));
					if (iscapital(sentence[0]) && sentence[lng - 1] == ' ')
						sub[count] = sentence.substr(1, lng - 1);
					count++;
				}
			}

		if (as == 'D')
		{
			cout << "Possible codes:" << endl;

			for (int i = 0; i < count; i++)
				if (!(a = atoi(sub[i].c_str())))
					cout << sub[i] << endl;
		}
		if (as == 'A')
		{
			cout << "Pssible codes:" << endl;

			for (int i = 0; i < count; i++)
				if (a = atoi(sub[i].c_str()))
					cout << a << endl;
		}

		if (as == '?')
		{
			cout << "Possible codes:" << endl;
			for (int i = 0; i <= sentence.length(); i++)
			{
				if (i != NULL)
					sub[i] = sentence.substr(i, (i + lng));
				else
					sub[i] = sentence.substr(i, NULL);
				cout << sub[i] << endl;
			}
		}
	}
	else
		cout << "Error" << endl;

	system("pause");
    return 0;
}

