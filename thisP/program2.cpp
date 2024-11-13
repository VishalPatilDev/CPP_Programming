#include <iostream>
#include <cstring>
using namespace std;

struct Employee {
    int id;
    char name[30];

    void setId(int empId) {
        this->id = empId;
    }

    void setName(const char* empName) {
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
    Employee e1;
    e1.setId(101);
    e1.setName("John Doe");
    
    cout << "Employee ID: " << e1.getId() << endl;
    cout << "Employee Name: " << e1.getName() << endl;
    return 0;
}
