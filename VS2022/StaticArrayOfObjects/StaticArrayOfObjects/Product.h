#pragma once

#include<iostream>
using namespace std;
#include<string>
class Product
{
private:
	int pid;
	string pname;
	float price;
	static string storeName;
	static int count;
public:
	Product();
	Product(string pname, float price);
	void accept();
	void display();
	string getPname();
	float getPrice();
	void setPname(string pname);
	void setPrice(float price);
	static void setStoreName(string storeName);
};
