#include<stdio.h>
#include<string.h>

struct Product {
    int id;
    char name[20];
    int quantity;
    float price;

    Product() {
        this->id = 0;
        strcpy(this->name, "none");
        this->quantity = 0;
        this->price = 0.0;
    }

    Product(int id, char* name, int quantity, float price) {
        this->id = id;
        strcpy(this->name, name);
        this->quantity = quantity;
        this->price = price;
    }

    void setId(int id) {
        this->id = id;
    }

    void setName(char* name) {
        strcpy(this->name, name);
    }

    void setQuantity(int quantity) {
        this->quantity = quantity;
    }

    void setPrice(float price) {
        this->price = price;
    }

    int getId() {
        return this->id;
    }

    char* getName() {
        return this->name;
    }

    int getQuantity() {
        return this->quantity;
    }

    float getPrice() {
        return this->price;
    }

    void display() {
        printf("Product ID: %d\n", this->id);
        printf("Name: %s\n", this->name);
        printf("Quantity: %d\n", this->quantity);
        printf("Price: %.2f\n", this->price);
    }
};

int main() {
    Product p1;
    printf("Default values:\n");
    p1.display();

    p1.setId(101);
    p1.setName("Laptop");
    p1.setQuantity(5);
    p1.setPrice(55000.0);
    printf("-------------------------------\n");
    printf("Updated values:\n");
    p1.display();

    printf("-------------------------------\n");
    printf("Parameterized constructor:\n");
    Product p2(102, "Mobile", 10, 15000.0);
    p2.display();

    return 0;
}
