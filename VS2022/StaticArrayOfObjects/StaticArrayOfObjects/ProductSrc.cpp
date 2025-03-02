#include"Product.h"

string Product::storeName = "Abc store";

int Product::count = 100;
Product::Product()
{
	count++;
	pid = count;
	pname = "NA";
	price = 0.0f;
}
Product::Product(string pname, float price)
{
	count++;
	pid = count;
	this->pname = pname;
	this->price = price;
}
void Product::accept()
{
	cout << "\n enter the details:";
	cin >> pname >> price;
}
void Product::display()
{
	cout << "\n the details: pid " <<
		pid << " pname " << pname <<
		" price " << price
		<< " storeName " << storeName;
}
string Product::getPname()
{
	return pname;
}
float Product::getPrice()
{
	return price;
}
void Product::setPname(string pname)
{
	this->pname = pname;
}
void Product::setPrice(float price)
{
	this->price = price;
}

void Product::setStoreName(string storeName)
{
	Product::storeName = storeName;
}