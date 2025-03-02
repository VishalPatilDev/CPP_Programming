#include <iostream>
#include <string>

class University
{
private:
    std::string name;
    std::string location;

public:
    static int totalStudents; // Static variable

    University(const std::string &name, const std::string &location) : name(name), location(location) {}

    void enrollStudent()
    {
        totalStudents++;
    }

    void displayInfo() const
    {
        std::cout << "University Name: " << name << std::endl;
        std::cout << "Location: " << location << std::endl;
    }

    static int getTotalStudents()
    { // Static function
        return totalStudents;
    }
};

// Initialize the static variable
int University::totalStudents = 0;

int main()
{
    University university1("MIT", "Cambridge");
    University university2("Stanford", "California");
    University university3("Oxford", "Oxford");

    university1.enrollStudent();
    university1.enrollStudent();
    university2.enrollStudent();
    university3.enrollStudent();
    university3.enrollStudent();
    university3.enrollStudent();

    university1.displayInfo();
    std::cout << std::endl;
    university2.displayInfo();
    std::cout << std::endl;
    university3.displayInfo();
    std::cout << std::endl;

    std::cout << "Total Students in all Universities: " << University::getTotalStudents() << std::endl;

    return 0;
}