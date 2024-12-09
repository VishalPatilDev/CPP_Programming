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
    //Addition
        Complex operator+(Complex c2){
            Complex temp;
            temp.real=this->real+c2.real;   //temp.setReal(this->getReal()+c2.getImg());
            temp.img=this->img+c2.img;      //img.setImg(this->getImg()+c2.getImg());
            return temp;
        }
        Complex operator+(int num){
            Complex temp;
            temp.real=this->real+num;
            temp.img=this->img+num;
            return temp;
            
        }
        
        //Subtraction
        Complex operator-(Complex d){
            Complex temp;
            temp.real=this->real-d.real;
            temp.img=this->img-d.img;
            return temp;
        }
        Complex operator-(int num){
            Complex temp;
            temp.real = this->real-num;
            temp.img=this->img-num;
            return temp;
        }

        //Multiplication
        Complex operator*(Complex d){
            Complex temp;
            temp.real=this->real*d.real;
            temp.img=this->img*d.img;
            return temp;
        }
        Complex operator*(int num){
            Complex temp;
            temp.real = this->real*num;
            temp.img=this->img*num;
            return temp;
        }

        //Division
        Complex operator/(Complex d){
            Complex temp;
            temp.real=this->real/d.real;
            temp.img=this->img/d.img;
            return temp;
        }
        Complex operator/(int num){
            Complex temp;
            temp.real=this->real/num;
            temp.img=this->img/num;
            return temp;
        }
    
};
Complex operator+(int num,Complex c){
    Complex temp;
    temp.real=num+c.real;
    temp.img=num+c.img;
    return temp;
}
Complex operator-(int num,Complex d){
        Complex temp;
        temp.real=d.real-num;
        temp.img=d.img-num;
        return temp;
    }
    Complex operator*(int num,Complex d){
        Complex temp;
        temp.real=d.real*num;
        temp.img=d.img*num;
        return temp;
    }
    Complex operator/(int num,Complex d){
        Complex temp;
        temp.real=d.real/num;
        temp.img=d.img/num;
        return temp;
    }

int main(){
    Complex c1;
    c1.setReal(10);
    c1.setImg(20);
    c1.display();

    Complex c2(5,4);
    c2.display();

    

    // Complex c3;
    // c3=c1+c2;  //c1.operator+(c2)
    // printf("---------------Operator Overloading-------------- \n");
    // c3.display();

    // Complex c4;
    // c4=c1+10;   //c1.operator+(10)
    // c4.display();

    // Complex c5;
    // c5=10+c1;   //operator+(10,c1)
    // c5.display();
    printf("-----------Addition----------\n");

        Complex c3;
        c3=c1+c2;    //c1.operator+(c2)
        // if(c3.img>=12){
        //     c3.conversion();
        // }
        c3.display();

        Complex c4;
        c4=c1+10;    //c1.operator+(10)
        c4.display();

        Complex c5;
        c5=10+c2;     //operator+(10,c2)
        c5.display();

        printf("------------Subtraction------------\n");
        Complex c6;
        c6=c1-c2;    //c1.operator-(c2)
        c6.display();

        Complex c7;
        c7=c1-5;    //c1.operator-(5)
        c7.display();

        Complex c8;
        c8=5-c1;    //operator-(5,c1)
        c8.display();

        printf("------------Multiplication------------\n");
        Complex c9;
        c9=c1*c2;    //c1.operator(c2)
        c9.display();

        Complex c10;
        c10=c1*5;   //c1.operator*(5)
        c10.display();

        Complex c11;
        c11=5*c1;   //operaotr*(5,c1)
        c11.display();

        printf("------------Division-----------\n");
        Complex c12;
        c12=c1/c2;  //c1.operator/(c2)
        c12.display();

        Complex c13;
        c13=c1/2;  //c1.operator/(2)
        c13.display();

        Complex c14;
        c14=2/c2;   //operator/(5,c1)
        c14.display();
}