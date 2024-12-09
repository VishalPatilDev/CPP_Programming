#include<stdio.h>
#include<string.h>

struct SalesManager {
    int id;
    char name[20];
    float salary;
    float incentive;
    int target;

    SalesManager() {
        this->id = 0;
        strcpy(this->name, "none");
        this->salary = 0.0;
        this->incentive = 0.0;
        this->target = 0;
    }

    SalesManager(int id, char* name, float salary, float incentive, int target) {
        this->id = id;
        strcpy(this->name, name);
        this->salary = salary;
        this->incentive = incentive;
        this->target = target;
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

    void setIncentive(float incentive) {
        this->incentive = incentive;
    }

    void setTarget(int target) {
        this->target = target;
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

    float getIncentive() {
        return this->incentive;
    }

    int getTarget() {
        return this->target;
    }

    void display() {
        printf("ID: %d\n", this->id);
        printf("Name: %s\n", this->name);
        printf("Salary: %.2f\n", this->salary);
        printf("Incentive: %.2f\n", this->incentive);
        printf("Target: %d\n", this->target);
    }
};

int main() {
    SalesManager sm1;
    printf("values before setting : \n");
    sm1.display();

    sm1.setId(1);
    sm1.setName("Rahul");
    sm1.setSalary(70000);
    sm1.setIncentive(5000);
    sm1.setTarget(100);
    printf("-------------------------------\n");
    printf("values after setting : \n");
    sm1.display();

    printf("-------------------------------\n");
    printf("parameterized constructor : \n");
    SalesManager sm2(2, "Kedar", 80000, 7000, 150);
    sm2.display();

    return 0;
}
