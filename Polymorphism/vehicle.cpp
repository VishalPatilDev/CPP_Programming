#include <iostream>
#include <string.h>
using namespace std;

class Vehicle {
public:
    char name[20];
    int speed;

    Vehicle() {
        strcpy(name, "Unknown");
        speed = 0;
    }

    Vehicle(const char* n, int s) {
        strcpy(name, n);
        speed = s;
    }

    void setName(const char* n) {
        strcpy(name, n);
    }

    void setSpeed(int s) {
        speed = s;
    }

    const char* getName() {
        return name;
    }

    int getSpeed() {
        return speed;
    }

    virtual void display() {
        cout << "Vehicle Name: " << name << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

class Car : public Vehicle {
public:
    int seats;

    Car() : Vehicle() {
        seats = 0;
    }

    Car(const char* n, int s, int st) : Vehicle(n, s) {
        seats = st;
    }

    void setSeats(int st) {
        seats = st;
    }

    int getSeats() {
        return seats;
    }

    void display() {
        cout << "------------Car------------" << endl;
        Vehicle::display();
        cout << "Seats: " << seats << endl;
    }
};

class Bike : public Vehicle {
public:
    bool isElectric;

    Bike() : Vehicle() {
        isElectric = false;
    }

    Bike(const char* n, int s, bool e) : Vehicle(n, s) {
        isElectric = e;
    }

    void setElectric(bool e) {
        isElectric = e;
    }

    bool getElectric() {
        return isElectric;
    }

    void display() {
        cout << "------------Bike------------" << endl;
        Vehicle::display();
        cout << "Electric: " << (isElectric ? "Yes" : "No") << endl;
    }
};

class Bus : public Vehicle {
public:
    int capacity;

    Bus() : Vehicle() {
        capacity = 0;
    }

    Bus(const char* n, int s, int c) : Vehicle(n, s) {
        capacity = c;
    }

    void setCapacity(int c) {
        capacity = c;
    }

    int getCapacity() {
        return capacity;
    }

    void display() {
        cout << "------------Bus------------" << endl;
        Vehicle::display();
        cout << "Capacity: " << capacity << " people" << endl;
    }
};

int main() {
    Vehicle* v;
    Car c("Car", 120, 5);
    v=&c;
    v->display();
    // c.display();

    Bike b("Bike", 80, true);
    v=&b;
    v->display();

    Bus bus("Bus", 60, 30);
    v=&bus;
    v->display();
}
