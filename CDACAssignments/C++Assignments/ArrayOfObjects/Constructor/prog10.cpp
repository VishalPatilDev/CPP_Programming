#include <iostream>
#include <string>

class Person
{
private:
    std::string name;
    int age;
    std::string city;

public:
    // Default constructor
    Person() : name(""), age(0), city("") {}

    // Parameterized constructor
    Person(const std::string &name, int age, const std::string &city) : name(name), age(age), city(city) {}

    // Getters
    std::string getName() const { return name; }
    int getAge() const { return age; }
    std::string getCity() const { return city; }

    // Setters
    void setName(const std::string &name) { this->name = name; }
    void setAge(int age) { this->age = age; }
    void setCity(const std::string &city) { this->city = city; }

    // Display function
    void display() const
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "City: " << city << std::endl;
    }
};

int main()
{
    // Creating objects using constructors
    Person person1;                      // Default constructor
    Person person2("Bob", 30, "London"); // Parameterized constructor

    // Using setters
    person1.setName("Alice");
    person1.setAge(25);
    person1.setCity("New York");

    // Displaying details using display function
    std::cout << "Person 1:" << std::endl;
    person1.display();

    std::cout << "\nPerson 2:" << std::endl;
    person2.display();

    // Using getters
    std::cout << "\nPerson 1's name: " << person1.getName() << std::endl;
    std::cout << "Person 2's age: " << person2.getAge() << std::endl;

    return 0;
}