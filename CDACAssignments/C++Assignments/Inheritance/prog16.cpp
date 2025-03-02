#include <iostream>
using namespace std;
class Shape
{
public:
    virtual double calArea() = 0;
    virtual double calPerimeter()
    {
        return 0.0;
    }
};
class Circle : public Shape
{
    int r;

public:
    Circle(int r)
    {
        this->r = r;
    }
    double calArea()
    {
        return r * r * 3.14;
    }
};
class Rectangle : public Shape
{
    int l;
    int w;

public:
    Rectangle(int l, int w)
    {
        this->l = l;
        this->w = w;
    }
    double calArea()
    {
        return l * w;
    }
};
class Triangle : public Shape
{
    int b;
    int h;
    int side;

public:
    Triangle(int b, int h, int side)
    {
        this->b = b;
        this->h = h;
        this->side = side;
    }
    double calArea()
    {
        return 0.5 * b * h;
    }
    double calPerimeter()
    {
        return side + side + side;
    }
};
int main()
{
    Shape *s;
    s = new Circle(10);
    cout << "Area of Circle : " << endl;
    cout << s->calArea();
    s = new Rectangle(10, 20);
    cout << "\n Area of Rectangle : " << endl;
    cout << s->calArea();
    s = new Triangle(10, 5, 5);
    cout << "\nArea of Triangle : " << endl;
    cout << s->calArea();
    cout << "\nPerimeter : " << endl;
    cout << s->calPerimeter();
    delete s;
}