#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual int calBasicToll() = 0;
    virtual int calExtraCharge(int nOfPersons) = 0;
};

class TwoWheeler : public Vehicle {
public:
    int calBasicToll() override {
        return 20;
    }
    int calExtraCharge(int nOfPersons) override {
        if(nOfPersons>2){
            return 10;
        }
        return 0;
    }
};

class ThreeWheeler : public Vehicle {
public:
    int calBasicToll() override {
        return 30;
    }
    int calExtraCharge(int nOfPersons) override {
        if(nOfPersons>3){
            return 20;
        }
        return 0;
    }
};

class FourWheeler : public Vehicle {
public:
    int calBasicToll() override {
        return 40;
    }
    int calExtraCharge(int nOfPersons) override {
        if(nOfPersons>4){
            return 40;
        }
        return 0;
    }
};

class HeavyVehicle : public Vehicle {
public:
    int calBasicToll() override {
        return 60;
    }
    int calExtraCharge(int nOfPersons) override {
        if(nOfPersons>6){
            return 100;
        }
        return 0;
    }
};

int main() {
    int vehicleType, numPersons;

    cout << "Enter your vehicle type:\n";
    cout << "2 - Two Wheeler\n";
    cout << "3 - Three Wheeler\n";
    cout << "4 - Four Wheeler\n";
    cout << "6 - Heavy Vehicle\n";
    cin >> vehicleType;

    cout << "Enter the number of persons in the vehicle: ";
    cin >> numPersons;

    Vehicle* vehicle ;

    switch (vehicleType) {
        case 2:
            vehicle = new TwoWheeler();
            break;
        case 3:
            vehicle = new ThreeWheeler();
            break;
        case 4:
            vehicle = new FourWheeler();
            break;
        case 6:
            vehicle = new HeavyVehicle();
            break;
        default:
            cout << "Invalid vehicle type!" << endl;
            return 1;
    }

    int basicToll = vehicle->calBasicToll();
    int extraCharge = vehicle->calExtraCharge(numPersons);

    cout << "Basic Toll = Rs " << basicToll << endl;
    cout << "Extra Charge = Rs " << extraCharge << endl;
    cout << "Total Toll = Rs " << (basicToll + extraCharge) << endl;
    return 0;
}
