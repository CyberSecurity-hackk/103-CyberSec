#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	string name;
	int age;
	// Your code here
	string Name() {
		return name;
	}
	void Smile() {
		cout << "Harry is smiling now"<<endl;
	};
};
	void print(Person* person)
	{
		cout << person->name << " is " << person->age << " years old" << endl;
	}

	int main()
	{
		Person person;
		person.name = "Harry";
		person.age = 23;
		cout << "Meet " << person.Name() << endl;
		print(&person);
		// Your code here
		person.Smile();

		system("pause");
		return 0;
	}