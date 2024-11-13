#include <iostream>
#include <cstring>
using namespace std;

struct Product {
    int code;
    char name[30];
    double price;

    // Non-parameterized constructor
    Product() {
        code = 0;
        strcpy(name, "Undefined");
        price = 0.0;
    }

    // Parameterized constructor
    Product(int c, const char* n, double p) {
        this->code = c;
        strcpy(this->name, n);
        this->price = p;
    }

    int getCode() {
        return this->code;
    }

    const char* getName() {
        return this->name;
    }

    double getPrice() {
        return this->price;
    }
};

int main() {
    Product p1;  // Default constructor
    Product p2(501, "Laptop", 750.50);  // Parameterized constructor

    cout << "Product Code: " << p1.getCode() << ", Name: " << p1.getName() << ", Price: " << p1.getPrice() << endl;
    cout << "Product Code: " << p2.getCode() << ", Name: " << p2.getName() << ", Price: " << p2.getPrice() << endl;

    return 0;
}
