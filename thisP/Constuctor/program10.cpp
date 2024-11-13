#include <iostream>
#include <cstring>
using namespace std;

struct House {
    int houseNumber;
    char street[50];
    double area;

    // Non-parameterized constructor
    House() {
        houseNumber = 0;
        strcpy(street, "Unnamed Street");
        area = 0.0;
    }

    // Parameterized constructor
    House(int num, const char* st, double a) {
        this->houseNumber = num;
        strcpy(this->street, st);
        this->area = a;
    }

    int getHouseNumber() {
        return this->houseNumber;
    }

    const char* getStreet() {
        return this->street;
    }

    double getArea() {
        return this->area;
    }
};

int main() {
    House h1;  // Default constructor
    House h2(123, "Maple Avenue", 150.5);  // Parameterized constructor

    cout << "House Number: " << h1.getHouseNumber() << ", Street: " << h1.getStreet() << ", Area: " << h1.getArea() << " sq meters" << endl;
    cout << "House Number: " << h2.getHouseNumber() << ", Street: " << h2.getStreet() << ", Area: " << h2.getArea() << " sq meters" << endl;

    return 0;
}
