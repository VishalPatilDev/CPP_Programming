#include "Circle.h"

#define PI 3.14
Circle::Circle(double r) {
	this->r = r;
}
void Circle::calArea() {
	double area =  r* r* PI;
	cout << "Area of Circle : " << area << endl;
}
void Circle::calCircumference() {
	double circum = 2 * PI * r;
	cout << "Circumference of Circle : " << circum<< endl;
}