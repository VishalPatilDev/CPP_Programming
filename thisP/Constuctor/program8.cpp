#include <iostream>
#include <cstring>
using namespace std;

struct City {
    int cityId;
    char name[30];
    int population;

    // Non-parameterized constructor
    City() {
        cityId = 0;
        strcpy(name, "Unknown");
        population = 0;
    }

    // Parameterized constructor
    City(int id, const char* n, int pop) {
        this->cityId = id;
        strcpy(this->name, n);
        this->population = pop;
    }

    int getCityId() {
        return this->cityId;
    }

    const char* getName() {
        return this->name;
    }

    int getPopulation() {
        return this->population;
    }
};

int main() {
    City c1;  // Default constructor
    City c2(1, "New York", 8419000);  // Parameterized constructor

    cout << "City ID: " << c1.getCityId() << ", Name: " << c1.getName() << ", Population: " << c1.getPopulation() << endl;
    cout << "City ID: " << c2.getCityId() << ", Name: " << c2.getName() << ", Population: " << c2.getPopulation() << endl;

    return 0;
}
