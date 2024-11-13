#include <iostream>
#include <cstring>
using namespace std;

struct Smartphone {
    char brand[20];
    int modelYear;
    double price;

    void setBrand(const char* b) {
        strcpy(this->brand, b);
    }

    void setModelYear(int y) {
        this->modelYear = y;
    }

    void setPrice(double p) {
        this->price = p;
    }

    const char* getBrand() {
        return this->brand;
    }

    int getModelYear() {
        return this->modelYear;
    }

    double getPrice() {
        return this->price;
    }
};

int main() {
    Smartphone phone;
    phone.setBrand("Apple");
    phone.setModelYear(2023);
    phone.setPrice(999.99);

    cout << "Brand: " << phone.getBrand() << endl;
    cout << "Model Year: " << phone.getModelYear() << endl;
    cout << "Price: " << phone.getPrice() << endl;
    return 0;
}
