#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <string>

using namespace std;

class FarmAnimal
{
public:
	FarmAnimal(double water_consumption);
	FarmAnimal(int weight);
	void setWaterConsumption(double waterConsumption);
	double getWaterConsumption();
	void set_weight(int weight);
	int get_weight();
private:
	double water_consumption;
	int weight;
};
void FarmAnimal::set_weight(int weight)
{
	if (weight >= 5)
		this->weight = weight;
	else
		this->weight = 10;
}
int FarmAnimal::get_weight()
{
	return this->weight;
}
FarmAnimal::FarmAnimal(double water_consumption)
{
	this->water_consumption = water_consumption;
}
FarmAnimal::FarmAnimal(int weight)
{
	this->set_weight(weight);
}
void FarmAnimal::setWaterConsumption(double waterConsumption)
{
	if (waterConsumption >= 1)
		this->water_consumption = waterConsumption;
	else
		this->water_consumption = 1;
}
double FarmAnimal::getWaterConsumption()
{
	return water_consumption;
}
class DummyAnimal : public FarmAnimal
{
public:
	DummyAnimal();
};
DummyAnimal::DummyAnimal() : FarmAnimal(10.0)
{
}
class DoublingAnimal : public FarmAnimal
{
public:
	DoublingAnimal(double given_water_consumption);
};
DoublingAnimal::DoublingAnimal(double given_water_consumption)
	: FarmAnimal(2 * given_water_consumption)
{
}
void printConsumption(FarmAnimal animal)
{
	cout << "This animal consumes " << animal.getWaterConsumption()
		<< " liters of water" << endl;
}class ConsumptionAccumulator
{
public:
	ConsumptionAccumulator();
	double getTotalConsumption();
	void addConsumption(FarmAnimal animal);
private:
	double total_consumption;
};
ConsumptionAccumulator::ConsumptionAccumulator() :
	total_consumption(0)
{
}
double ConsumptionAccumulator::getTotalConsumption()
{
	return total_consumption;
}
void ConsumptionAccumulator::addConsumption(FarmAnimal animal)
{
	total_consumption += animal.getWaterConsumption();
}

vector<string> split(string line, char c)
{
	vector<string> result;
	string tmpstr = "";
	for (int i = 0; i < line.length(); i++)
	{
		if (line[i] != c)
			tmpstr += line[i];
		else
		{
			result.push_back(tmpstr);
			tmpstr = "";
		}
	}
	if (line[line.length() - 1] != ' ')
		result.push_back(tmpstr);
	return result;
}
int main()
{
	FarmAnimal animalA(5);
	DummyAnimal animalB;
	DoublingAnimal animalC(21);
	cout << "animalA consumes " << animalA.getWaterConsumption()
		<< " liters of water." << endl;
	cout << "What about the others?" << endl;
	printConsumption(animalB);
	printConsumption(animalC);

	return 0;
}
