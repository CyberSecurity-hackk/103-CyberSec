#include <string>
#include <iostream>

int main()
{
    std::string sentence;
    std::getline(std::cin, sentence);

for (int i = 0; i < sentence.length(); i++)
		if (sentence[i] == ' ' && sentence[i + 1] == ' ')
		{
			sentence.erase(i, 1);
			i = (i - 1);
		}


    std::cout << sentence << "\n";
}