#include <iostream>
#include <cstring>
using namespace std;

struct Product {
    int code;
    char name[30];
    double price;

    void setCode(int c) {
        this->code = c;
    }

    void setName(const char* n) {
        strcpy(this->name, n);
    }

    void setPrice(double p) {
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
    Product p1;
    p1.setCode(501);
    p1.setName("Laptop");
    p1.setPrice(750.50);

    cout << "Product Code: " << p1.getCode() << endl;
    cout << "Product Name: " << p1.getName() << endl;
    cout << "Product Price: " << p1.getPrice() << endl;
    return 0;
}
