#include "stdafx.h"
#include <iostream>
#include<string>
#include <algorithm>

using namespace std;

int main()
{
	string word, anagram;

	cin >> word;
	cin >> anagram;
	if (word.length() == anagram.length() && word.length() <= 20)
	{
		sort(word.begin(), word.end());
		sort(anagram.begin(), anagram.end());

		if (word == anagram)
			cout << "anagrams" << endl;
		else
			cout << "not anagrams" << endl;
	}

	system("pause");
	return 0;
}
