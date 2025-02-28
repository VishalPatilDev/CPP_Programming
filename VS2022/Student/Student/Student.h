#pragma once
#include<iostream>
#include<string.h>
#include "Date.h"
class Student {
private:
	int id;
	string name;
	int marks;
	Date dob;
	static int count;
public:
	Student();
	Student(string name, int marks, Date& dob);
	void accept();
	void display();



};