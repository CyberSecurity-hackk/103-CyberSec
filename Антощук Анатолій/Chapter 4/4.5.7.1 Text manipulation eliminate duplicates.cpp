#include <iostream>
#include<cstdlib>
#include<ctime>
#include <vector>
#include <sstream>
using namespace std;
int main()
{
	string input;
	cout << "Enter the sentence: ";
	getline(cin, input);

	string temp, output;
	vector<string> vec;
	stringstream ss;
	ss << input;

	while (ss >> temp)
		vec.push_back(temp);

	int i;
	for (i = 0; i < vec.size() - 1; i++)
	{
		if (vec[i] != vec[i + 1])
			output += vec[i] + " ";
	}
	output += vec[i];
	cout << output << endl << endl;
	return 0;
}
