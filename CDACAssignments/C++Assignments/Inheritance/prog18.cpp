// #include <iostream>
// using namespace std;
// class Employee
// {
//     string name;
//     int eid;

// public:
//     virtual void pay() = 0;
// };
// class HourlyEmployee : public Employee
// {
// public:
//     void pay()
//     {
//         cout << "HourlyEmployee Payment : " << 5000 << endl;
//     }
// };
// class SalariedEmployee : public Employee
// {
// public:
//     void pay()
//     {
//         cout << "Salaried Employee payment : " << 50000 << endl;
//     }
// };
// int main()
// {
//     Employee *e;
//     e = new HourlyEmployee;
//     e->pay();
//     e = new SalariedEmployee;
//     e->pay();
// }

#include <iostream>
#include <string>

// Abstract Base Class: Employee
class Employee
{
protected:
    std::string name;
    int employeeID;

public:
    Employee(const std::string &name, int employeeID) : name(name), employeeID(employeeID) {}

    virtual double calculatePay() const = 0; // Pure virtual function (abstract method)

    virtual void displayDetails() const
    {
        std::cout << "Employee ID: " << employeeID << std::endl;
        std::cout << "Name: " << name << std::endl;
    }

    virtual ~Employee() {} // Virtual destructor for proper cleanup
};

// Derived Class: Hourly Employee
class HourlyEmployee : public Employee
{
private:
    double hourlyRate;
    double hoursWorked;

public:
    HourlyEmployee(const std::string &name, int employeeID, double hourlyRate, double hoursWorked)
        : Employee(name, employeeID), hourlyRate(hourlyRate), hoursWorked(hoursWorked) {}

    double calculatePay() const override
    {
        return hourlyRate * hoursWorked;
    }

    void displayDetails() const override
    {
        Employee::displayDetails();
        std::cout << "Hourly Rate: $" << hourlyRate << std::endl;
        std::cout << "Hours Worked: " << hoursWorked << std::endl;
        std::cout << "Pay: $" << calculatePay() << std::endl;
    }
};

// Derived Class: Salaried Employee
class SalariedEmployee : public Employee
{
private:
    double monthlySalary;

public:
    SalariedEmployee(const std::string &name, int employeeID, double monthlySalary)
        : Employee(name, employeeID), monthlySalary(monthlySalary) {}

    double calculatePay() const override
    {
        return monthlySalary;
    }

    void displayDetails() const override
    {
        Employee::displayDetails();
        std::cout << "Monthly Salary: $" << monthlySalary << std::endl;
        std::cout << "Pay: $" << calculatePay() << std::endl;
    }
};

int main()
{
    Employee *employees[2];

    employees[0] = new HourlyEmployee("Alice", 101, 20.0, 40.0);
    employees[1] = new SalariedEmployee("Bob", 202, 5000.0);

    for (int i = 0; i < 2; ++i)
    {
        employees[i]->displayDetails();
        std::cout << "--------------------" << std::endl;
        delete employees[i]; // Clean up dynamically allocated memory
    }

    return 0;
}