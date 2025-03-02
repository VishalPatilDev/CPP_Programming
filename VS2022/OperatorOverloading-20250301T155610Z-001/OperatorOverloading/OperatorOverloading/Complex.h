#pragma once
#include<iostream>
using namespace std;
class Complex {
	int r;
	int img;
public:
	Complex(int r, int img) {
		this->r = r;
		this->img = img;
	}
	Complex& operator+(Complex& cref) {
		Complex temp(0,0);
		temp.r = this->r + cref.r;
		temp.img = this->img + cref.img;
		return temp;

	}
	void display() {
		cout << r << "+" << img << "i"<<endl;
	}
};