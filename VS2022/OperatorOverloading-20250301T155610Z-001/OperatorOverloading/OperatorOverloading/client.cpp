#include  "Complex.h"
int main() {
	Complex c1(10, 5);
	Complex c2(15, 3);
	Complex c3 = c1 + c2;//c1.operator+(c2);
	c1.display();
	c2.display();
	c3.display();
}