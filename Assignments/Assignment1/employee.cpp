#include<stdio.h>
#include<string.h>

struct Employee {
    int id;
    char name[20];
    float salary;

    Employee() {
        this->id = 0;
        strcpy(this->name, "none");
        this->salary = 0.0;
    }

    Employee(int id, char* name, float salary) {
        this->id = id;
        strcpy(this->name, name);
        this->salary = salary;
    }

    void setId(int id) {
        this->id = id;
    }

    void setName(char* name) {
        strcpy(this->name, name);
    }

    void setSalary(float salary) {
        this->salary = salary;
    }

    int getId() {
        return this->id;
    }

    char* getName() {
        return this->name;
    }

    float getSalary() {
        return this->salary;
    }

    void display() {
        printf("ID: %d\n", this->id);
        printf("Name: %s\n", this->name);
        printf("Salary: %.2f\n", this->salary);
    }
};

int main() {
    Employee e1;
    printf("values before setting : \n");
    e1.display();

    e1.setId(1);
    e1.setName("Vishal");
    e1.setSalary(50000);
    printf("-------------------------------\n");
    printf("values after setting : \n");
    e1.display();

    printf("-------------------------------\n");
    printf("parameterized constructor : \n");
    Employee e2(2, "Rahul", 75000);
    e2.display();

    return 0;
}
