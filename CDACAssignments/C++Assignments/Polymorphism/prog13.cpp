#include <iostream>
#include <string>
#include <cmath>

class Shape
{
protected:
    std::string color;
    bool filled;

public:
    Shape(std::string color, bool filled)
    {
        this->color = color;
        this->filled = filled;
    }

    virtual void draw()
    {
        std::cout << "Drawing a shape." << std::endl;
    }

    virtual double getArea()
    {
        return 0.0;
    }

    virtual double getPerimeter()
    {
        return 0.0;
    }

    virtual ~Shape() {} // Virtual destructor for proper cleanup
};

class Circle : public Shape
{
public:
    Circle(std::string color, bool filled) : Shape(color, filled) {}

    void draw()
    {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(std::string color, bool filled, double length, double width)
        : Shape(color, filled)
    {
        this->length = length;
        this->width = width;
    }

    double getArea()
    {
        return length * width;
    }
};

class Triangle : public Shape
{
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(const std::string &color, bool filled, double side1, double side2, double side3)
        : Shape(color, filled)
    {
        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
    }

    double getPerimeter()
    {
        return side1 + side2 + side3;
    }
};

int main()
{
    Shape *shapes[3];

    shapes[0] = new Circle("Red", true);
    shapes[1] = new Rectangle("Blue", false, 5.0, 3.0);
    shapes[2] = new Triangle("Green", true, 3.0, 4.0, 5.0);

    for (int i = 0; i < 3; ++i)
    {
        shapes[i]->draw();
        std::cout << "Area: " << shapes[i]->getArea() << std::endl;
        std::cout << "Perimeter: " << shapes[i]->getPerimeter() << std::endl;
        std::cout << "--------------------" << std::endl;
    }

    // Clean up dynamically allocated memory
    for (int i = 0; i < 3; ++i)
    {
        delete shapes[i];
    }

    return 0;
}