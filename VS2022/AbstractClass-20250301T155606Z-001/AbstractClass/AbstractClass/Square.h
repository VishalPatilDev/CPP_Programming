#pragma once
#include "Shape.h"
class Square :public Shape{
private:
	double side;
public:
	Square(double side);
	void calArea();

};
