#include "Employee.h"
#include<iostream>
#include<string.h>
using namespace std;
Employee::Employee(){
    this->id=0;
    strcpy(this->name,"none");
    this->sal=0;
}
Employee::Employee(int id,const char* nm, double sal) {
        this->id = id;
        strcpy(this->name, nm);
        this->sal = sal;
    }

    void Employee:: setId(int id) {
        this->id = id;
    }

    void Employee::setName(const char* nm) {
        strcpy(this->name, nm);
    }

    void Employee:: setSal(double sals) {
        this->sal = sal;
    }

    int Employee::getId() {
        return this->id;
    }

    char* Employee::getName() {
        return this->name;
    }

    double Employee::getSal() {
        return this->sal;
    }
    // double calSal();

    void Employee::display() {
        cout<<"ID: "<<this->id<<endl;
        cout<<"Name: "<< this->name<<endl;
        cout<<"Salary:"<< this->sal<<endl;
    }
SalesManager::SalesManager(){
    this->incentive=0;
    this->target=0;
}
SalesManager::SalesManager(int id,const char* nm,double sal,double incen,int target):Employee(id,nm,sal){
    this->incentive=incen;
    this->target=target;
}
void SalesManager::setIncentive(double incen){
    this->incentive=incen;
}
void SalesManager::setTarget(int target){
    this->target=target;
}
double SalesManager::getIncentive(){
    return this->incentive;

}
int SalesManager::getTarget(){
    return this->target;
}
double SalesManager::calSal(){
    return this->getSal()+this->getIncentive();
}
void SalesManager::display(){
    Employee::display();
    cout<<"Incentive : "<<this->incentive<<endl;
    cout<<"Target : "<<this->target<<endl;
}
//Admin
Admin::Admin(){
    this->allowance=0;
}
Admin::Admin(int id,const char* nm,double sal,double allowance):Employee(id,nm,sal){
    this->allowance=allowance;
}
void Admin::setAllowance(double allowance){
    this->allowance=allowance;
}

double Admin::getAllowance(){
    return this->allowance;
}
double Admin::calSal(){
    return getSal()+getAllowance();
}
void Admin::display(){
    Employee::display();
    cout<<"Allowance : "<<this->allowance<<endl;
}

//HR
HR::HR(){
    this->commission=0;
}
HR::HR(int id,const char* nm,double sal,double commission):Employee(id,nm,sal){
    this->commission=commission;
}
void HR::setCommission(double commission){
    this->commission=commission;
}
double HR::getCommision(){
    return this->commission;
}
double HR::calSal(){
    return getSal()+getCommision();
}
void HR::display(){
    Employee::display();
    cout<<"Commision : "<<this->commission<<endl;
}



