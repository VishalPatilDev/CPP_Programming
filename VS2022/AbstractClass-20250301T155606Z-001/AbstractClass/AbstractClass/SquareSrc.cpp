#include "Square.h"

Square::Square(double side) {
	this->side = side;
}
void Square::calArea() {
	double area = side * side;
	cout << "Area of Square is : " << area;
}