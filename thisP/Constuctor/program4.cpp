#include <iostream>
#include <cstring>
using namespace std;

struct Car {
    int model;
    char brand[20];
    double price;

    // Non-parameterized constructor
    Car() {
        model = 0;
        strcpy(brand, "Unknown");
        price = 0.0;
    }

    // Parameterized constructor
    Car(int m, const char* b, double p) {
        this->model = m;
        strcpy(this->brand, b);
        this->price = p;
    }

    int getModel() {
        return this->model;
    }

    const char* getBrand() {
        return this->brand;
    }

    double getPrice() {
        return this->price;
    }
};

int main() {
    Car c1;  // Default constructor
    Car c2(2022, "Toyota", 25000);  // Parameterized constructor

    cout << "Car Model: " << c1.getModel() << ", Brand: " << c1.getBrand() << ", Price: " << c1.getPrice() << endl;
    cout << "Car Model: " << c2.getModel() << ", Brand: " << c2.getBrand() << ", Price: " << c2.getPrice() << endl;

    return 0;
}
