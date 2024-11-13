#include <iostream>
#include <cstring>
using namespace std;

struct Animal {
    char species[20];
    int age;
    char habitat[30];

    void setSpecies(const char* s) {
        strcpy(this->species, s);
    }

    void setAge(int a) {
        this->age = a;
    }

    void setHabitat(const char* h) {
        strcpy(this->habitat, h);
    }

    const char* getSpecies() {
        return this->species;
    }

    int getAge() {
        return this->age;
    }

    const char* getHabitat() {
        return this->habitat;
    }
};

int main() {
    Animal a1;
    a1.setSpecies("Lion");
    a1.setAge(5);
    a1.setHabitat("Savannah");

    cout << "Species: " << a1.getSpecies() << endl;
    cout << "Age: " << a1.getAge() << endl;
    cout << "Habitat: " << a1.getHabitat() << endl;
    return 0;
}
