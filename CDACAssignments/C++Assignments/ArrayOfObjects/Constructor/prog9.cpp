#include <iostream>

class Date
{
private:
    int day;
    int month;
    int year;

public:
    // No-argument constructor
    Date() : day(1), month(1), year(2000) {}

    // Parameterized constructor
    Date(int day, int month, int year) : day(day), month(month), year(year) {}

    // Display function
    void display() const
    {
        std::cout << day << "/" << month << "/" << year << std::endl;
    }
};

int main()
{
    Date date1; // No-argument constructor
    date1.display();

    Date date2(25, 12, 2023); // Parameterized constructor
    date2.display();

    return 0;
}