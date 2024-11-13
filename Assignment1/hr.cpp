#include<stdio.h>
#include<string.h>

struct HR {
    int id;
    char name[20];
    float salary;
    float commission;

    HR() {
        this->id = 0;
        strcpy(this->name, "none");
        this->salary = 0.0;
        this->commission = 0.0;
    }

    HR(int id, char* name, float salary, float commission) {
        this->id = id;
        strcpy(this->name, name);
        this->salary = salary;
        this->commission = commission;
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

    void setCommission(float commission) {
        this->commission = commission;
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

    float getCommission() {
        return this->commission;
    }

    void display() {
        printf("ID: %d\n", this->id);
        printf("Name: %s\n", this->name);
        printf("Salary: %.2f\n", this->salary);
        printf("Commission: %.2f\n", this->commission);
    }
};

int main() {
    HR hr1;
    printf("values before setting : \n");
    hr1.display();

    hr1.setId(1);
    hr1.setName("Vishwajeet");
    hr1.setSalary(65000);
    hr1.setCommission(3000);
    printf("-------------------------------\n");
    printf("values after setting : \n");
    hr1.display();

    printf("-------------------------------\n");
    printf("parameterized constructor : \n");
    HR hr2(2, "Ronit", 72000, 4000);
    hr2.display();

    return 0;
}
