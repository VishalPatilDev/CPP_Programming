#include <iostream>
#include "Complex.h"
using namespace std;
    Complex::Complex(){
        this->real=0;
        this->img=0;
    }
    Complex::Complex(int r,int i){
        this->real=r;
        this->img=i;
    }
    void Complex:: setReal(int r){
        this->real=r;
    }
    void Complex:: setImg(int i){
        this->img=i;
    }
    int Complex:: getReal(){
        return this->real;

    }
    int Complex:: getImg(){
        return this->img;
    }
    void Complex::display(){
        cout<<this->real<<"+"<<this->img<<"i"<<endl;
    }

