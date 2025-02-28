#include "Date.h"
Date::Date() {
	int day = 1;
	int month = 1;
	int year = 2025;
}
Date::Date(int day, int month, int year) {
	this->day = day;
	this->month = month;
	this->year = year;

}
void Date::accept() {
	cout << "Enter Date of birth of student :  ";
	cin >> day >> month >> year;
}
void Date::display() {
	cout << day << "/" << month << "/" << year;
}