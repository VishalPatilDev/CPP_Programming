#include"Order.h"
#include<iostream>

using namespace std;

Order::Order() {

}
Order::Order(int nopos) {
	this->nopos = nopos;
	this->ptr = new float[nopos];
	for (int i = 0; i < nopos; i++)
	{
		this->ptr[i] = 0;

	}
}
Order::Order(Order& o) {
	this->nopos = o.nopos;
	this->ptr = new float[nopos];
	for (int i = 0; i < nopos; i++)
	{
		this->ptr[i] = o.ptr[i];

	}

}
void Order::accept()
{

	for (int i = 0; i < nopos; i++) {
		cout << "enter price";
		cin >> ptr[i];
	}
}
void Order::display()
{
	for (int i = 0; i < nopos; i++) {
		cout << ptr[i] << endl;
	}
}
void Order::calculateorder() {
	int sum = 0;
	for (int i = 0; i < nopos; i++) {
		sum = sum + ptr[i];
	}
	cout << "Sum of price is  : " << sum << endl;
}
void Order::calculateorder(string cc) {
	int sum = 0;
	for (int i = 0; i < nopos; i++) {
		sum = sum + ptr[i];
	}
	if (cc == "ABC") {
		sum -= 100;
	}
	cout << "Sum of price is  : " << sum << endl;
}
void Order::calculateorder(string cc, bool ms) {
	int sum = 0;
	for (int i = 0; i < nopos; i++) {
		sum = sum + ptr[i];
	}
	if (cc == "ABC") {
		sum -= 100;
	}
	if (ms == true) {
		sum -= 50;
	}
	cout << "Sum of price is  : " << sum << endl;
}

Order::~Order() {
	if (ptr != NULL) {
		delete[] ptr;
		ptr = NULL;
	}
}