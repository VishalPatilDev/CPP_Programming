// #include<stdio.h>
// #define PI 3.14
// struct Area{
//     int areaOfRect(int length,int width){
//         return length*width;
//     }
//     float areaOfTriangle(float base,float height){
//         return 0.5*base*height;
//     }
//     float areaOfCircle(float radius){
//         return PI*(radius*radius);
//     }


// };
// int main(){
//     Area a1;
//     int length=10,width=20;
//     float base=10,height=20,radius=20;
//     printf("Area of Triangle is : %.2f\n",a1.areaOfTriangle(base,height));
//     printf("Area of Rectangle is : %d\n",a1.areaOfRect(length,width));
//     printf("ARea of Circle is : %.2f\n",a1.areaOfCircle(radius));

// }


#include<stdio.h>
#define PI 3.14
struct Triangle{
    float base=10,height=20;
};
struct Rectangle{
    float length=10,width=20;
};
struct Circle{
    float radius=5;
};
struct Area{
    float area(Triangle t){
        return 0.5*t.base*t.height;
    }
    float area(Rectangle r){
        return r.length*r.width;
    }
    float area(Circle c){
        return PI*c.radius;
    }
};



int main(){
    Area a1;
    Triangle t;
    Rectangle r;
    Circle c;
    printf("Area of Triangle = %.2f\n",a1.area(t));
    printf("Area of Rectangle = %.2f\n",a1.area(r));
    printf("Area of Circle = %.2f\n",a1.area(c));
    return 0;
}