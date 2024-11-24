#include<iostream>
using namespace std;
#define PI 3.14
class Shape{
    public:
    float area;
    Shape(){
        this->area=0;
    }
    void display(){
        cout<<"Area of Shape is : "<<area<<endl;
    }
    
};
class Rect:public Shape{
    public:
    int length,breadth;
    Rect(){
        this->length=0;
        this->breadth=0;
    }
    Rect(int l,int b){
        this->length=l;
        this->breadth=b;
    }
    float calArea(){
        area=length*breadth;
        return area;
    }
    void display(){
        cout<<"Length of Rectangle is : "<<length<<endl;
        cout<<"Breadth of Rectangle is : "<<breadth<<endl;
        calArea();
        cout<<"Area of Rectangle is : "<<area<<endl;
    }
};
class Triangle:public Shape{
    public:
    int base,height;
    Triangle(){
        this->base=0;
        this->height=0;
    }
    Triangle(int b,int h){
        this->height=h;
        this->base=b;
    }
    float calArea(){
        area=0.5*(base*height);
        return area;
    }
    void display(){
        cout<<"Base of Triangle is : "<<base<<endl;
        cout<<"Height of Triangle is : "<<height<<endl;
        calArea();
        cout<<"Area of Triangle is : "<<area<<endl;
    }
};
class Circle:public Shape{
    public:
    int radius;
    Circle(){
        this->radius=0;
    }
    Circle(int r){
        this->radius=r;
    }
    float calArea(){
        area=PI*radius*radius;
        return area;
    }
    void display(){
        cout<<"Radius of Cirlce is : "<<radius<<endl;
        calArea();
        cout<<"Area of Circle is : "<<area<<endl;
    }
};

int main(){
    cout<<"----Rectangle----"<<endl;
    Rect r(10,5);
    r.display();
    cout<<"----Circle-----"<<endl;
    Circle c(10);
    c.display();
    cout<<"----Triangle----"<<endl;
    Triangle t(10,4);
    t.display();
}
