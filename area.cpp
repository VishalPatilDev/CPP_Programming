#include<stdio.h>
#define PI 3.14
struct Area{
    int base,height,width,length,radius;
    void setBase(int b){
        this->base=b;
    }
    void setHeight(int height){
        this->height=height;
    }
    float getAreaOfTriangle(){
        return 0.5*this->base*this->height;
    }


    //RECTANGLE
    void setWidth(int width){
        this->width=width;
    }
    void setLength(int length){
        this->length=length;
    }
    int getAreaofRect(){
        return length*width;
    }

    //Circle
    void setRadius(int radius){
        this->radius = radius;
    }



    
    
};
int main(){
    Area a1;
    int base,height,width,length,radius;
    a1.setBase(10);
    a1.setHeight(20);
    a1.setWidth(15);
    a1.setLength(20);
    a1.setRadius(10);
    printf("Area of triangle is : %.2f\n",a1.getAreaOfTriangle());
    printf("Area of Rectangle is : %d\n",a1.getAreaofRect());
    return 0;
    
}