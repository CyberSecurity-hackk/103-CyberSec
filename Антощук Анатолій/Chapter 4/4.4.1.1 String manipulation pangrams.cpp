#include <iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
int main()
{
	string str;
	string alphabet = "ABCDEFGHIJKLMNOPQRSTVWXYZ";
	cout << "Enter text: ";
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

	return 0;
}
