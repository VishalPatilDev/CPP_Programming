#include<stdio.h>

struct Distance {
    int feet;
    int inch;

    Distance() {
        this->feet = 0;
        this->inch = 0;
    }

    Distance(int feet, int inch) {
        this->feet = feet;
        this->inch = inch;
    }

    void setFeet(int feet) {
        this->feet = feet;
    }

    void setInch(int inch) {
        this->inch = inch;
    }

    int getFeet() {
        return this->feet;
    }

    int getInch() {
        return this->inch;
    }

    void display() {
        printf("Distance: %d feet %d inches\n", this->feet, this->inch);
    }
    Distance add(Distance d2){
        Distance temp;
        temp.feet=this->feet+d2.feet;
        temp.inch=this->inch+d2.inch;
        return temp;
    }
    Distance sub(Distance d2){
        Distance temp;
        temp.feet = this->feet-d2.feet;
        temp.inch = this->inch-d2.inch;
        return temp;
    }
    Distance mul(Distance d2){
        Distance temp;
        temp.feet = this->feet*d2.feet;
        temp.inch=this->inch*d2.inch;
        return temp;
    }
    Distance div(Distance d2){
        Distance temp;
        temp.feet=this->feet / d2.feet;
        temp.inch = this->inch / d2.inch;
        return temp;
    }
};

int main() {
    Distance d1;
    printf("Default values:\n");
    d1.display();

    d1.setFeet(5);
    d1.setInch(11);
    printf("-------------------------------\n");
    printf("Updated values:\n");
    d1.display();

    printf("-------------------------------\n");
    printf("Parameterized constructor:\n");
    Distance d2(6, 2);
    d2.display();

    Distance d3;
    d3=d1.add(d2);
    printf("------ Addition ------\n");
    d3.display();
    d3=d1.sub(d2);
    printf("------ subtraction ------\n");
    d3.display();
    d3=d1.mul(d2);
    printf("------ Multiplication ------\n");
    d3.display();
    d3=d1.div(d2);
    printf("------ Division ------\n");
    d3.display();

    return 0;
}
