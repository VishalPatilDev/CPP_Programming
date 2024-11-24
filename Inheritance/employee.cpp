#include<iostream>
#include<string.h>
using namespace std;

struct Employee {
    int id;
    char name[20];
    float salary;

    Employee() {
        cout<<"Employee Default Contsructor called!"<<endl;
        this->id = 0;
        strcpy(this->name, "none");
        this->salary = 0.0;
    }

    Employee(int id, char* name, float salary) {
        cout<<"Employee Parametrized Constructor called"<<endl;
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
        cout<<"ID: "<<this->id<<endl;
        cout<<"Name: "<< this->name<<endl;
        cout<<"Salary:"<< this->salary<<endl;
    }
};


struct SalesManager :public Employee{
    // int id;
    // char name[20];
    // float salary;
    float incentive;
    int target;

    SalesManager() {
        cout<<"SalesManager Default Contsructor called"<<endl;
        this->incentive = 0.0;
        this->target = 0;
    }

    SalesManager(int id, const char* name, float salary, float incentive, int target) {
        cout<<"SalesManager Parameterized Constructor called"<<endl;
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
        cout<<"ID:"<< this->id<<endl;
        cout<<"Name: "<< this->name<<endl;
        cout<<"Salary:"<< this->salary<<endl;
        cout<<"Incentive: "<< this->incentive<<endl;
        cout<<"Target: "<< this->target<<endl;
    }
};

int main(){
    SalesManager s1;
    s1.display();
    SalesManager s2(10,"Vishal",30000,230,203000);
    s2.display();

}



