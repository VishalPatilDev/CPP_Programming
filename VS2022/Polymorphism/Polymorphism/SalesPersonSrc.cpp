#include "SalesPerson.h"
#include <iostream>
using namespace std;

SalesPerson::SalesPerson() {
	int nos = 0;
	double comm = 0.0;
}
SalesPerson::SalesPerson(string name, double sal, Date& doj, int nos, double comm) : Employee(name,sal,doj){
	this->nos = nos;
	this->comm = comm;
}
void SalesPerson::accept() {
	Employee::accept();

	cout << "Enter SalesPerson Details : " << endl;
	
}
void SalesPerson::display() {
	Employee::display();
	//cout << "SalesPerson Details--------" << endl;
	cout << nos << endl << comm<<endl;
}
double SalesPerson::calSalary() {
	return sal + (nos * comm);
}