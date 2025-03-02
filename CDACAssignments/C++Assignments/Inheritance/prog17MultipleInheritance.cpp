#include <iostream>
using namespace std;
class Animal
{
public:
    void animalProperty()
    {
        cout << "Animal Property" << endl;
    }
};
class Dog
{
public:
    void animalProperty()
    {
        cout << "Dog animal Property" << endl;
    }
};
class BabyDog : public Animal, public Dog
{
public:
};
int main()
{
    BabyDog b;
    b.Animal::animalProperty();
    b.Dog::animalProperty();
}