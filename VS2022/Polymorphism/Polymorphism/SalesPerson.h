#pragma once
#include "Employee.h"
#include "Date.h"
class SalesPerson : public Employee {
private:
	int nos; //numberOfSales
	double comm;//commission

public :
	SalesPerson();
	SalesPerson(string name, double sal, Date& doj, int nos, double comm);
	void accept();
	void display();
	double calSalary();
};