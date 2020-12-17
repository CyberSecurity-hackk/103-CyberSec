#include <iostream>
#include<cstdlib>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
	string a, b;
	cout << "Enter two words: " << endl;
	cin >> a >> b;
	if (a.length() == b.length() && a.length() <= 20)
	{
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		if (a == b)
			cout << "Words are anagrams" << endl;
		else
			cout << "Words aren`t anagrams" << endl;
	}
	else
		cout << "Error" << endl;
	return 0;
}
