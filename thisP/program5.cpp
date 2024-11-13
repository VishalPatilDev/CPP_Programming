#include <iostream>
#include <cstring>
using namespace std;

struct Car {
    int model;
    char brand[20];
    double price;

    void setModel(int m) {
        this->model = m;
    }

    void setBrand(const char* b) {
        strcpy(this->brand, b);
    }

    void setPrice(double p) {
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
    Car c1;
    c1.setModel(2022);
    c1.setBrand("Toyota");
    c1.setPrice(25000);

    cout << "Car Model: " << c1.getModel() << endl;
    cout << "Brand: " << c1.getBrand() << endl;
    cout << "Price: " << c1.getPrice() << endl;
    return 0;
}
