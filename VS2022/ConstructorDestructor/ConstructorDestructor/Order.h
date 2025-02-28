#include<iostream>
#pragma once

using namespace std;

class Order {
private:
	int nopos;
	float* ptr;

public:
	Order(int nopos);
	Order(Order& o);
	void accept();
	void display();
	void calculateorder();
	~Order();

};