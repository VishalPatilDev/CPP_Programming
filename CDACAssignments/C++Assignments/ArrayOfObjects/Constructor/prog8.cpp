#include <iostream>

class ComplexNumber
{
private:
    double real;
    double imaginary;

public:
    ComplexNumber() : real(0.0), imaginary(0.0) {}
    ComplexNumber(double real, double imaginary) : real(real), imaginary(imaginary) {}

    double getReal() const { return real; }
    double getImaginary() const { return imaginary; }

    void setReal(double real) { this->real = real; }
    void setImaginary(double imaginary) { this->imaginary = imaginary; }

    void display() const
    {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main()
{
    ComplexNumber c1;
    c1.setReal(3.5);
    c1.setImaginary(2.1);
    std::cout << "Complex Number c1: ";
    c1.display();

    ComplexNumber c2(1.0, -4.0);
    std::cout << "Complex Number c2: ";
    c2.display();

    std::cout << "Real part of c2: " << c2.getReal() << std::endl;
    std::cout << "Imaginary part of c2: " << c2.getImaginary() << std::endl;

    return 0;
}