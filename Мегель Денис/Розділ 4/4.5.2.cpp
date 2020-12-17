#include "stdafx.h"
#include <string>
#include <iostream>


int main()
{
	std::string sentence;
	std::cout << "Enter sentence: ";
	std::cin.ignore();
	std::getline(std::cin, sentence);
	// manipulate the sentence here
	for (int i = 0; i < sentence.length(); i++)
		if (sentence[i] == ' ' && sentence[i + 1] == ' ')
		{
			sentence.erase(i, 1);
			i = (i - 1);
		}
	std::cout << sentence << "\n";

	system("pause");
	return 0;
}


