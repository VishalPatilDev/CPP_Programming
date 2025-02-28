#include "Employee.h"
#include "Date.h"
#include "Manager.h"
#include "SalesPerson.h"
#include "PrintDetailsSrc.cpp"


int main() {
	Date d(12, 25, 2025);
	Employee e("vishal", 50000, d);
	cout << "Employee Details ----------"<<endl;
	Print::displayDetails(e);
	//e.display();
	//e.calSalary();
	Manager m("vp", 5000, d, 10, 29);
	cout << "Manager Details ----------"<<endl;
	Print::displayDetails(m);
	//m.display();
	//m.calSalary();
	SalesPerson s("v", 234324, d, 10, 5.6);
	cout << "SaleePerson Details ----------"<<endl;
	Print::displayDetails(s);
	//s.display();
	//s.calSalary();
}