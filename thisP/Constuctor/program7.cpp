#include <iostream>
#include <cstring>
using namespace std;

struct Laptop {
    int modelNumber;
    char brand[30];
    double price;

    // Non-parameterized constructor
    Laptop() {
        modelNumber = 0;
        strcpy(brand, "Unknown");
        price = 0.0;
    }

    // Parameterized constructor
    Laptop(int m, const char* b, double p) {
        this->modelNumber = m;
        strcpy(this->brand, b);
        this->price = p;
    }

    int getModelNumber() {
        return this->modelNumber;
    }

    const char* getBrand() {
        return this->brand;
    }

    double getPrice() {
        return this->price;
    }
};

int main() {
    Laptop l1;  // Default constructor
    Laptop l2(1234, "Dell", 1200.99);  // Parameterized constructor

    cout << "Laptop Model: " << l1.getModelNumber() << ", Brand: " << l1.getBrand() << ", Price: $" << l1.getPrice() << endl;
    cout << "Laptop Model: " << l2.getModelNumber() << ", Brand: " << l2.getBrand() << ", Price: $" << l2.getPrice() << endl;

    return 0;
}
