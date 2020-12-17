#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
	string temp, output,input;
	vector<string> vec;
	stringstream ss;
	ss << input;
	std::string sentence;
	std::getline(std::cin, sentence);
	// manipulate the sentence here



	while (ss >> temp)
		vec.push_back(temp);

	int i;
	for (i = 0; i < vec.size() - 1; i++)
	{
		if (vec[i] != vec[i + 1])
			output += vec[i] + " ";
	}
	output += vec[i];
	cout << "INPUT:  " << input << endl;
	cout << "\n============================\n\n";
	cout << "OUTPUT:  " << output << endl << endl;

	system("pause");
	return 0;

}