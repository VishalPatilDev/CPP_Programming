#include <iostream>
#include <string>

class Vehicle
{
protected:
    std::string vehicle_no;
    std::string owner_name;

public:
    Vehicle() : vehicle_no(""), owner_name("") {}

    virtual void accepts()
    {
        std::cout << "Enter Vehicle Number: ";
        std::getline(std::cin, vehicle_no);
        std::cout << "Enter Owner Name: ";
        std::getline(std::cin, owner_name);
    }

    virtual void display() const
    {
        std::cout << "Vehicle Number: " << vehicle_no << std::endl;
        std::cout << "Owner Name: " << owner_name << std::endl;
    }
};

class TwoWheeler : public Vehicle
{
protected:
    std::string veh_type;

public:
    TwoWheeler() : veh_type("") {}

    void accepts() override
    {
        Vehicle::accepts();
        std::cout << "Enter Vehicle Type (Motorcycle, Scooter, etc.): ";
        std::getline(std::cin, veh_type);
    }

    void display() const override
    {
        Vehicle::display();
        std::cout << "Vehicle Type: " << veh_type << std::endl;
    }
};

int main()
{
    TwoWheeler twoWheeler;

    std::cout << "Enter Two-Wheeler Details:" << std::endl;
    twoWheeler.accepts();

    std::cout << "\nTwo-Wheeler Details:" << std::endl;
    twoWheeler.display();

    return 0;
}