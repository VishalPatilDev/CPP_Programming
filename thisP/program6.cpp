#include <iostream>
#include <cstring>
using namespace std;

struct Person {
    int age;
    char name[50];
    char address[100];

    void setAge(int a) {
        this->age = a;
    }

    void setName(const char* n) {
        strcpy(this->name, n);
    }

    void setAddress(const char* addr) {
        strcpy(this->address, addr);
    }

    int getAge() {
        return this->age;
    }

    const char* getName() {
        return this->name;
    }

    const char* getAddress() {
        return this->address;
    }
};

int main() {
    Person p1;
    p1.setAge(25);
    p1.setName("Alice");
    p1.setAddress("123 Main St");

    cout << "Age: " << p1.getAge() << endl;
    cout << "Name: " << p1.getName() << endl;
    cout << "Address: " << p1.getAddress() << endl;
    return 0;
}
