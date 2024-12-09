#include<iostream>
using namespace std;
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
        cout<<this->real<<"+"<<this->img<<"i";
    }
    Complex(){
        this->real=0;
        this->img=0;
    }
    Complex(int r,int i){
        this->real=r;
        this->img=i;
    }
    //Logical &&
        bool operator &&(Complex c){
            return (this->real && c.real) && (this->img && c.img);
        }
    //Logical ||
        bool operator||(Complex c){
            return (this->real || c.real) || (this->img || c.img);
        }
    //Relational ==
        bool operator==(Complex c){
            return this->real==c.real && this->img==c.img;
        }
    //Relational !=
        bool operator!=(Complex c){
            return this->real!=c.real && this->img!=c.img;
        }
    //Unary Operators
    //prefix++
    Complex operator++(){
        ++this->real;
        ++this->img;
        return *this;
    }
    //Postfix++
    Complex operator++(int){
        Complex temp;
        temp.real=this->real++;
        temp.img=this->img++;
        return temp;
    }
};


int main(){
    Complex c1(10,5);
    Complex c2(0,3);
    Complex c3;
    cout<<"Logical And : "<<(c1 && c2)<<endl;
    cout<<"Logical Or : "<<(c1 || c2)<<endl;
    cout<<"Realational == : "<<(c1==c2)<<endl;
    cout<<"Relational != : "<<(c1!=c2)<<endl;
    cout<<"preffix ++ : "<<endl;
    (++c1).display();
    cout<<"\nPostfix ++ : "<<endl;
    (c1++).display();



    

    
    
}