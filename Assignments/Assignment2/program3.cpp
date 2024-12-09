#include<stdio.h>
struct Student {
    float percentage=80;
};
struct Employee{
    float sal = 500000;
};
struct Loan{
    float loan(Student s){
        if(s.percentage>=80){
            return 200000;
        }
        else if(s.percentage>=60 && s.percentage<80){
            return 100000;
        }
        else if (s.percentage>=40 && s.percentage<60){
            return 50000;
        }
        else{
            return -1;
        }
    }

    float loan(Employee e){
        if(e.sal>=120000){
            return 700000;
        }
        else if(e.sal>=1000000 && e.sal<120000){
            return 600000;
        }
        else if (e.sal>=600000 && e.sal<1000000){
            return 500000;
        }
        else if (e.sal>=400000 && e.sal<600000){
            return 400000;
        }
        else{
            return -1;
        }
    }
};
int main(){
    Loan l;
    Student s;
    Employee e;
    if(l.loan(s)==-1){
        printf("No loan approved!\n");
    }
    else{
        printf("The Loan for Student based on percentage = %.2f\n",l.loan(s));
    }
    if(l.loan(e)==-1){
        printf("No loan approved!\n");
    }
    else{
        printf("The Loan for Employee based on salary = %.2f\n",l.loan(e));
    }
    

}