#include "Employee.h"
#include<iostream>
int Employee::count = 100;
Employee::Employee() {
	count++;
	eid = count;
	name = "NA";
	sal = 0.0;
}
Employee::Employee(string name, double sal, Date& doj) {
	count++;
	eid = count;
	this->name = name;
	this->sal = sal;
	this->doj = doj;
}
void Employee::accept() {
	cout << "Enter Employee Details : " << endl;
	cin >> name >> sal;
	doj.accept();
}
void Employee::display() {
	//cout << "Employee Details -------"<<endl;
	cout <<eid<<endl<< name << endl << sal << endl;
	doj.display();
}
double Employee:: calSalary() {
	return sal;
}