#include <iostream>
#include <cstring>
using namespace std;

struct Animal {
    int id;
    char species[30];
    double weight;

    // Non-parameterized constructor
    Animal() {
        id = 0;
        strcpy(species, "Unknown");
        weight = 0.0;
    }

    // Parameterized constructor
    Animal(int aId, const char* sp, double w) {
        this->id = aId;
        strcpy(this->species, sp);
        this->weight = w;
    }

    int getId() {
        return this->id;
    }

    const char* getSpecies() {
        return this->species;
    }

    double getWeight() {
        return this->weight;
    }
};

int main() {
    Animal a1;  // Default constructor
    Animal a2(101, "Elephant", 5400.5);  // Parameterized constructor

    cout << "Animal ID: " << a1.getId() << ", Species: " << a1.getSpecies() << ", Weight: " << a1.getWeight() << " kg" << endl;
    cout << "Animal ID: " << a2.getId() << ", Species: " << a2.getSpecies() << ", Weight: " << a2.getWeight() << " kg" << endl;

    return 0;
}
