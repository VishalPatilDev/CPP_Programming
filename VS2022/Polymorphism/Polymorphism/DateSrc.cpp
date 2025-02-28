#include "Date.h"
#include<iostream>
using namespace std;
Date::Date() {
	day = 1;
	month = 1;
	year = 2025;

}
Date::Date(int day,int month,int year) {
	this->day = day;
	this->month = month;
	this->year = year;
}
void Date::accept() {
	cout << "Enter Date Details : " << endl;
	cin >> day >> month >> year;
}
void Date::display() {
	cout << day << "/" << month << "/" << year  <<endl;
}