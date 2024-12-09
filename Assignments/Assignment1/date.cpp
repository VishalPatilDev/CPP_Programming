#include<stdio.h>

struct Date {
    int day;
    int month;
    int year;

    Date() {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }

    Date(int day, int month, int year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void setDay(int day) {
        this->day = day;
    }

    void setMonth(int month) {
        this->month = month;
    }

    void setYear(int year) {
        this->year = year;
    }

    int getDay() {
        return this->day;
    }

    int getMonth() {
        return this->month;
    }

    int getYear() {
        return this->year;
    }

    void display() {
        printf("Date: %02d/%02d/%04d\n", this->day, this->month, this->year);
    }
};

int main() {
    Date d1;
    printf("Default values:\n");
    d1.display();

    d1.setDay(12);
    d1.setMonth(11);
    d1.setYear(2024);
    printf("-------------------------------\n");
    printf("Updated values:\n");
    d1.display();

    printf("-------------------------------\n");
    printf("Parameterized constructor:\n");
    Date d2(15, 8, 2023);
    d2.display();

    return 0;
}
