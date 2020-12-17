#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class ShopItemOrder {
public:
	ShopItemOrder(string name, float unitPrice, int amount)
	{
		this->name = name;
		this->unitPrice = unitPrice;
		this->amount = amount;

	}
	string GetName()
	{
		return name;
	}
	void SetName(string name)
	{
		if (name.empty())
			throw invalid_argument("Set product name ");
		this->name = name;
	}
	float GetUnitPrice()
	{
		return unitPrice;
	}
	void SetUnitPrice(float price)
	{
		if (price <= 0)
			throw invalid_argument("Set product price ");
		unitPrice = price;
	}
	int GetAmount()
	{
		return amount;
	}
	void SetAmount(int amount)
	{
		if (amount <= 0)
			throw invalid_argument("Set product amount ");
		this->amount = amount;
	}
	float GetTotalPrice()
	{
		return unitPrice * amount;
	}
	void PringShopItemOrder()
	{
		cout << "Order item's name: " << name << " Item price: " << unitPrice << " Item amount: " << amount << endl;
	}
private:
	string name;
	float unitPrice;
	int amount;
};

int main()
{
	ShopItemOrder item1("Apple", 0.99, 10);

	item1.PringShopItemOrder();
	cout << "Total price is " << item1.GetTotalPrice() << endl;

	item1.SetAmount(5);
	item1.PringShopItemOrder();
	cout << "Total price is " << item1.GetTotalPrice() << endl;

	item1.SetUnitPrice(0.99);
	cout << "Price of " << item1.GetName() << " is " << item1.GetUnitPrice() << endl;
	cout << "Total price is " << item1.GetTotalPrice() << endl;

	system("pause");
	return 0;
}