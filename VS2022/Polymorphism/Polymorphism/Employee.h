#pragma once
#include "Date.h"
#include <string>
using namespace std;
class Employee {
protected:
	int eid;
	string name;
	double sal;
	Date doj;
	static int count;
public:
	Employee();
	Employee(string name, double sal, Date& doj);
	 void accept();
	 virtual void display();
	 virtual double calSalary();
};
