#pragma once
#include "Employee.h"
#include "Date.h"
class Manager :public Employee {
private:
	double fa, ta; //foodAllowance//travellingAllowance
public:
	Manager();
	Manager(string name, double sal, Date& doj, double fa, double ta);
	void accept();
	void display();
	double calSalary();
	
};