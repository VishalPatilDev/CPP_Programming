#include <iostream>
#include <cstring>
using namespace std;

struct Employee {
    int id;
    char name[30];

    // Non-parameterized constructor
    Employee() {
        id = 0;
        strcpy(name, "Unknown");
    }

    // Parameterized constructor
    Employee(int empId, const char* empName) {
        this->id = empId;
        strcpy(this->name, empName);
    }

    int getId() {
        return this->id;
    }

    const char* getName() {
        return this->name;
    }
};

int main() {
    Employee e1;  // Default constructor
    Employee e2(101, "John Doe");  // Parameterized constructor

    cout << "Employee ID: " << e1.getId() << ", Name: " << e1.getName() << endl;
    cout << "Employee ID: " << e2.getId() << ", Name: " << e2.getName() << endl;

    return 0;
}
