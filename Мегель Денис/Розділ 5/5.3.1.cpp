#include "stdafx.h"
#include <iostream>

using namespace std;

class FlightBooking {
public:
	FlightBooking(int id, int capacity, int reserved);
	void printStatus();
private:
	int id;
	int capacity;
	int reserved;
};
void FlightBooking::printStatus()
{
	// print report here
	cout.precision(0);
	cout << "Flight " << id << " : " << reserved << "/" << capacity << " (" << fixed
		<< (float)reserved / capacity * 100 << "%) seats taken";
}
FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
	// Save data to members
	this->id = id;
	this->capacity = capacity;
	this->reserved = reserved;
}
int main() {
	int reserved = 0,
		capacity = 0;
	std::cout << "Provide flight capacity: ";
	std::cin >> capacity;
	std::cout << "Provide number of reserved seats: ";
	std::cin >> reserved;
	FlightBooking booking(1, capacity, reserved);
	booking.printStatus();

	system("pause");
	return 0;
}

