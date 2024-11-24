#include <iostream>
#include <string.h>
using namespace std;
#define PI 3.14

class Shape {
public:
    char name[20];

    Shape() {
        strcpy(name, "None");
    }

    Shape(const char* n) {
        strcpy(name, n);
    }

    void setName(const char* n) {
        strcpy(name, n);
    }

    const char* getName() {
        return name;
    }

    virtual double calculateArea() {
        return 0.0;
    }

    virtual void display() {
        cout << "Shape: " << name << endl;
    }
};

class Circle : public Shape {
public:
    double radius;

    Circle() : Shape() {
        radius = 0.0;
    }

    Circle(const char* n, double r) : Shape(n) {
        radius = r;
    }

    void setRadius(double r) {
        radius = r;
    }

    double getRadius() {
        return radius;
    }

    double calculateArea() {
        return PI * radius * radius;
    }

    void display() {
        // cout << "Shape: " << name << endl;
        Shape::display();
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

class Rectangle : public Shape {
public:
    double length, width;

    Rectangle() : Shape() {
        length = 0.0;
        width = 0.0;
    }

    Rectangle(const char* n, double l, double w) : Shape(n) {
        length = l;
        width = w;
    }

    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    double getLength() {
        return length;
    }

    double getWidth() {
        return width;
    }

    double calculateArea() {
        return length * width;
    }

    void display() {
        // cout << "Shape: " << name << endl;
        Shape::display();
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

class Triangle : public Shape {
public:
    double base, height;

    Triangle() : Shape() {
        base = 0.0;
        height = 0.0;
    }

    Triangle(const char* n, double b, double h) : Shape(n) {
        base = b;
        height = h;
    }

    void setDimensions(double b, double h) {
        base = b;
        height = h;
    }

    double getBase() {
        return base;
    }

    double getHeight() {
        return height;
    }

    double calculateArea() {
        return 0.5 * base * height;
    }

    void display() {
        cout << "Shape: " << name << endl;
        cout << "Base: " << base << ", Height: " << height << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    Circle c("Circle", 5.0);
    c.display();

    Rectangle r("Rectangle", 4.0, 6.0);
    r.display();

    Triangle t("Triangle", 4.0, 7.0);
    t.display();

    return 0;
}
