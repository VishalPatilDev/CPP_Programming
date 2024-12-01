#include "Complex.h"
int main(){
    Complex c;
    c.setReal(5);
    c.setImg(10);
    c.display();
    Complex c1(10,5);
    c1.display();
}