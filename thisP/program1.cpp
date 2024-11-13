#include <iostream>
#include <cstring>
using namespace std;

struct Student {
    int rollNo;
    char name[20];

    // Member function to set roll number
    void setRoll(int a) {
        rollNo = a;
    }

    // Member function to set name, using const char* to avoid warnings
    void setName(const char* str) {
        strcpy(name, str);
    }

    // Member function to get roll number
    int getRoll() {
        return rollNo;
    }

    // Member function to get name
    const char* getName() {
        return name;
    }
};

int main() {
    Student s1;
    s1.setRoll(10);
    s1.setName("vishal");

    cout << "Roll Number: " << s1.getRoll() << endl;
    cout << "Name: " << s1.getName() << endl;

    return 0;
}
