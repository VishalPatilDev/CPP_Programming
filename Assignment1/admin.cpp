#include<stdio.h>
#include<string.h>

struct Admin {
    int id;
    char name[20];
    float salary;
    float allowance;

    Admin() {
        this->id = 0;
        strcpy(this->name, "none");
        this->salary = 0.0;
        this->allowance = 0.0;
    }

    Admin(int id, char* name, float salary, float allowance) {
        this->id = id;
        strcpy(this->name, name);
        this->salary = salary;
        this->allowance = allowance;
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

    void setAllowance(float allowance) {
        this->allowance = allowance;
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

    float getAllowance() {
        return this->allowance;
    }

    void display() {
        printf("ID: %d\n", this->id);
        printf("Name: %s\n", this->name);
        printf("Salary: %.2f\n", this->salary);
        printf("Allowance: %.2f\n", this->allowance);
    }
};

int main() {
    Admin a1;
    printf("values before setting : \n");
    a1.display();

    a1.setId(1);
    a1.setName("Vishal");
    a1.setSalary(80000);
    a1.setAllowance(5000);
    printf("-------------------------------\n");
    printf("values after setting : \n");
    a1.display();

    printf("-------------------------------\n");
    printf("parameterized constructor : \n");
    Admin a2(2, "Vishwajeet", 90000, 6000);
    a2.display();

    return 0;
}
