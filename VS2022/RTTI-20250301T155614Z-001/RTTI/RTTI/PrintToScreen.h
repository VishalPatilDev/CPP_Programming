#include<iostream>
using namespace std;
#include"Employee.h"
class PrintToScreen
{
public:
	//display the details of an employee recevied in para - generic pointer
	/*static void displayEmployeeDetails(Employee * emp)
	{
		emp->display();
	}*/

	//static void displayEmployeeDetails(Employee& emp)  //emp is a generic ref
	//{
	//	emp.display();
	//	cout << "\n the computed salary is:" << emp.computeSal();
	//	if (typeid(emp) == typeid(SalesPerson)) {
	//		SalesPerson& sp = dynamic_cast<SalesPerson&>(emp);
	//		sp.bonus();
	//	}
	//	if (typeid(emp) == typeid(Manager)) {
	//		Manager& sp = dynamic_cast<Manager&>(emp);
	//		sp.payperformancePerks();
	//	}
	//}
	static void displayEmployeeDetails(Employee* emp) {
		emp->display();
		cout << "\n the computed salary is:" << emp->computeSal();
		if (typeid(*emp) == typeid(Manager)) {
			Manager* m = dynamic_cast<Manager*>(emp);
			m->payperformancePerks();
		}
		if (typeid(*emp) == typeid(SalesPerson)) {
			SalesPerson* sp = dynamic_cast<SalesPerson*>(emp);
			sp->bonus();
		}
	}
};