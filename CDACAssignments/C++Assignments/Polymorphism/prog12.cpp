#include <iostream>

class Calculator
{
public:
    int calculateArea(int side)
    {
        return side * side;
    }

    int calculateArea(int length, int width)
    {
        return length * width;
    }

    double calculateArea(double majorAxis, double minorAxis)
    {
        return 3.14159 * majorAxis * minorAxis;
    }
};

int main()
{
    Calculator calc;

    std::cout << "Area of square (side=5): " << calc.calculateArea(5) << std::endl;
    std::cout << "Area of rectangle (length=4, width=6): " << calc.calculateArea(4, 6) << std::endl;
    std::cout << "Area of ellipse (major=3.0, minor=2.0): " << calc.calculateArea(3.0, 2.0) << std::endl;

    return 0;
}