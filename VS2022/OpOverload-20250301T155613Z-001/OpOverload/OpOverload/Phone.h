#pragma once
#include<iostream>
using namespace std;
class ValidatePhone {
	string phNo;
public:
	ValidatePhone(string phNo) {
		this->phNo = phNo;
	}
	string operator!() {
		if (this->phNo.length() == 10) {
			return phNo;
		}
		else {
			return "Wrong Input";
		}
		
	}
};