#include<stdio.h>

struct Time {
    int hour;
    int min;
    int sec;

    Time() {
        this->hour = 0;
        this->min = 0;
        this->sec = 0;
    }

    Time(int hour, int min, int sec) {
        this->hour = hour;
        this->min = min;
        this->sec = sec;
    }

    void setHour(int hour) {
        this->hour = hour;
    }

    void setMin(int min) {
        this->min = min;
    }

    void setSec(int sec) {
        this->sec = sec;
    }

    int getHour() {
        return this->hour;
    }

    int getMin() {
        return this->min;
    }

    int getSec() {
        return this->sec;
    }

    void display() {
        printf("Time: %02d:%02d:%02d\n", this->hour, this->min, this->sec);
    }
};

int main() {
    Time t1;
    printf("Default values:\n");
    t1.display();

    t1.setHour(14);
    t1.setMin(30);
    t1.setSec(45);
    printf("-------------------------------\n");
    printf("Updated values:\n");
    t1.display();

    printf("-------------------------------\n");
    printf("Parameterized constructor:\n");
    Time t2(9, 15, 0);
    t2.display();

    return 0;
}
