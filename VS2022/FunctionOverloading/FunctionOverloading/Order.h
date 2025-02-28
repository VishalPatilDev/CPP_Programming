#pragma once
#include<iostream>
using namespace std;

class Order {
private:
	int nopos;
	float* ptr;

public:
	Order();
	Order(int nopos);
	Order(Order& o);
	void accept();
	void display();
	void calculateorder();
	void calculateorder(string cc);
	void calculateorder(string cc, bool ms);
	~Order();

};