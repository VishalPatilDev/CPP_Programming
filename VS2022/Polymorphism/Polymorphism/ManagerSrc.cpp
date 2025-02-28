#include "Manager.h"
#include <iostream>
using namespace std;
Manager::Manager() {
	fa = 0.0;
	ta = 0.0;
}
Manager::Manager(string name, double sal, Date& doj, double fa, double ta) :Employee(name,sal,doj){
	this->fa = fa;
	this->ta = ta;
}
void Manager::accept() {
	Employee::accept();
	cout << "Enter Manager Details  : " << endl;
	cin >> fa >> ta;
}
void Manager::display() {
	cout << "09-09-"<<endl;
	Employee::display();
	//cout << "Manager Details ---------" << endl;
	cout << fa << endl << ta<<endl;
}
double Manager::calSalary() {
	return sal + fa + ta;
}