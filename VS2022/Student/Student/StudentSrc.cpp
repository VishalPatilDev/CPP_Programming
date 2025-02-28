#include "Student.h"
int Student::count = 0;
Student::Student() {
	count++;
	id = count;
	this->name = "NA";
	this->marks = 0;

}
Student::Student(string name, int marks, Date& dob) {
	count++;
	id = count;
	this->name = name;
	this->marks = marks;
	this->dob = dob;
}
void Student::accept() {
	cout << "Enter student details : ";
	cin >> name >> marks;
	dob.accept();
}
void Student::display() {
	cout << "Name : " << name << endl << "marks :" << marks << endl;
	dob.display();

}