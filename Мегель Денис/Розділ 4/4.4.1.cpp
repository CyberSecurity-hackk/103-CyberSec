#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	string str;
	string alphabet = "ABCDEFGHIJKLMNOPQRSTVWXYZ";
	getline(cin, str);
	for (int j = 0; j < alphabet.size(); j++)
	{
		int count = 0;
		for (int i = 0; i < str.size(); i++)
		{
			if (tolower(str[i]) == tolower(alphabet[j]))
				count++;
		}
		cout << alphabet[j] << " - " << count << endl;
	}


	system("pause");
    return 0;
}

