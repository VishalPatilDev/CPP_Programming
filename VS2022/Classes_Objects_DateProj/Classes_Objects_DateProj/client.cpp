#include"Date.h"

int main()
{
	Date d1;  //default object

	d1.accept(); //mutator- modifies the state of an object
	d1.display(); //facilitator- displays the current state of object

	Date d2(3, 2, 2001);  //parameterized object
	d2.display();
	cout << "\n the year of d2 is " << d2.getYear();
	d2.setYear(2005);
	cout << "\n the year of d2 is " << d2.getYear();
}