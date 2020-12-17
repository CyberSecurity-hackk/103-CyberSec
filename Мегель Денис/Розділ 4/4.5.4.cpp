#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	std::string from;
	std::getline(std::cin, from);
	std::string to;
	std::getline(std::cin, to);
	std::string sentence;
	std::getline(std::cin, sentence);
	// change all occurrences of 'from' into 'to' in the sentence

	size_t pos = sentence.find(from);
	sentence.replace(pos, from.length(), to);
	std::cout << sentence << "\n";

	system("pause");
	return 0;
}