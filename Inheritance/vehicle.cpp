#include <iostream>
#include <string.h>
using namespace std;

// Base Class: Vehicle
struct Vehicle {
    char brand[50];
    int speed;

    Vehicle() {
        cout << "Vehicle Default Constructor called!" << endl;
        strcpy(brand, "Unknown");
        speed = 0;
    }

    Vehicle(const char* brand, int speed) {
        cout << "Vehicle Parameterized Constructor called!" << endl;
        strcpy(this->brand, brand);
        this->speed = speed;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

// Derived Class: Car
struct Car : public Vehicle {
    int seatingCapacity;

    Car() {
        cout << "Car Default Constructor called!" << endl;
        seatingCapacity = 0;
    }

    Car(const char* brand, int speed, int seatingCapacity)
        : Vehicle(brand, speed) {
        cout << "Car Parameterized Constructor called!" << endl;
        this->seatingCapacity = seatingCapacity;
    }

    void display() {
        Vehicle::display(); // Call base class display
        cout << "Seating Capacity: " << seatingCapacity << " persons" << endl;
    }
};

// Derived Class: Truck
struct Truck : public Vehicle {
    int loadCapacity;

    Truck() {
        cout << "Truck Default Constructor called!" << endl;
        loadCapacity = 0;
    }

    Truck(const char* brand, int speed, int loadCapacity)
        : Vehicle(brand, speed) {
        cout << "Truck Parameterized Constructor called!" << endl;
        this->loadCapacity = loadCapacity;
    }

    void display() {
        Vehicle::display(); // Call base class display
        cout << "Load Capacity: " << loadCapacity << " tons" << endl;
    }
};

int main() {
    // Create Car
    Car car("Toyota", 180, 5);
    car.display();

    // Create Truck
    Truck truck("Volvo", 120, 20);
    truck.display();

    return 0;
}
