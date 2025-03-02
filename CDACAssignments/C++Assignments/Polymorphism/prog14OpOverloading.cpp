#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    Complex(int real, int img) : real(real), img(img) {}
    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
    Complex operator-(Complex &cref)
    {
        Complex temp(0, 0);
        temp.real = this->real - cref.real;
        temp.img = this->img - cref.img;
        return temp;
    }
};
int main()
{
    Complex c1(10, 20);
    Complex c2(5, 15);
    Complex c3 = c1 - c2;
    c1.display();
    c2.display();
    c3.display();
}