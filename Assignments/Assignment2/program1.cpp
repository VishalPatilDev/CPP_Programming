#include<stdio.h>
struct Calculator{
    //Add
    int add(int a,int b){
        return a+b;
    }
    float add(float a, float b){
        return a+b;
    }
    float add(int a, float b){
        return a+b;
    }
    float add(float a , int b){
        return a+b;
    }

    //Sub
    int sub(int a,int b){
        return a-b;
    }
    float sub(float a, float b){
        return a-b;
    }
    float sub(int a, float b){
        return a-b;
    }
    float sub(float a , int b){
        return a-b;
    }


    //MUl
    int mul(int a,int b){
        return a*b;
    }
    float mul(float a, float b){
        return a*b;
    }
    float mul(int a, float b){
        return a*b;
    }
    float mul(float a , int b){
        return a*b;
    }

    //DIV
    int div(int a,int b){
        return a/b;
    }
    float div(float a, float b){
        return a/b;
    }
    float div(int a, float b){
        return a/b;
    }
    float div(float a , int b){
        return a/b;
    }
};
int main(){
    Calculator c1;
    int x=20,y=10;
    float a=10.5,b=4.6;
    printf("Addition of int int = %d\n",c1.add(x,y));
    printf("Addition of int int = %f\n",c1.add(a,b));
    printf("Addition of int int = %f\n",c1.add(x,a));
    printf("Addition of int int = %f\n",c1.add(a,x));

    //Sub
    printf("Subtraction of int int = %d\n",c1.sub(x,y));
    printf("Subtraction of int int = %f\n",c1.sub(a,b));
    printf("Subtraction of int int = %f\n",c1.sub(x,a));
    printf("Subtraction of int int = %f\n",c1.sub(a,x));

    //MUL
    printf("Multiplication of int int = %d\n",c1.mul(x,y));
    printf("Multiplication of int int = %f\n",c1.mul(a,b));
    printf("Multiplication of int int = %f\n",c1.mul(x,a));
    printf("Multiplication of int int = %f\n",c1.mul(a,x));

    //DIv
    printf("Division of int int = %d\n",c1.div(x,y));
    printf("Division of int int = %f\n",c1.div(a,b));
    printf("Division of int int = %f\n",c1.div(x,a));
    printf("Division of int int = %f\n",c1.div(a,x));
    
}