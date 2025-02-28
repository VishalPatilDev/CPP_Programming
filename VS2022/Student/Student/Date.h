#pragma once
#include<iostream>
using namespace std;
class Date {
private:
	int day;
	int month;
	int year;
public:
	Date();
	Date(int day, int month, int year);
	void accept();
	void display();
};