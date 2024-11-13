#include<stdio.h>
struct Complex{
    int real;
    int img;
    void setReal(int r){
        this->real=r;
    }
    void setImg(int i){
        this->img=i;
    }
    int getReal(){
        return this->real;
    }
    int getImg(){
        return this->img;
    }
    void display(){
        printf("%d + %di\n",this->real,this->img);
    }
    Complex(){
        this->real=0;
        this->img=0;
    }
    Complex(int r,int i){
        this->real=r;
        this->img=i;
    }
    Complex add(Complex c2){
        Complex temp;
        temp.real=this->real + c2.real;
        temp.img = this->img + c2.img;
        return temp;
    }
    Complex sub(Complex c2){
        Complex temp;
        temp.real = this->real-c2.real;
        temp.img = this->img - c2.img;
        return temp;
    }
    Complex mul(Complex c2){
        Complex temp;
        temp.real = this->real * c2.real;
        temp.img = this->img * c2.img;
        return temp;
    }
    Complex div(Complex c2){
        Complex temp;
        temp.real = this->real / c2.real;
        temp.img = this->img / c2.img;
        return temp;
    }
    Complex operator +(Complex c2){
        Complex temp;
        temp.real=this->real+c2.real;
        temp.img=this->img+c2.img;
        return temp;
    }
};
int main(){
    Complex c1;
    c1.setReal(10);
    c1.setImg(20);
    c1.display();

    Complex c2(15,25);
    c2.display();

    Complex c3;
    c3=c1.add(c2);
    printf("Addition = ");
    c3.display();

    c3=c1.sub(c2);
    printf("Subtraction = ");
    c3.display();

    c3=c1.mul(c2);
    printf("Multiplication = ");
    c3.display();

    c3=c1.div(c2);
    printf("Division = ");
    c3.display();

    Complex c4;
    c4=c1+c2;
    printf("Operator Overloading = ");
    c4.display();
}