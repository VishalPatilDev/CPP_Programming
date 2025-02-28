#include "Employee.h"
#include<iostream>
class Print {
public:
	static void displayDetails(Employee& ep) {
		ep.display();
		cout<<"Salary="<<ep.calSalary()<<endl;
	}
};