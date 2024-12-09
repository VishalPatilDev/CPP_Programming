#include<iostream>
#include<string.h>
using namespace std;
class Employee{
    public:
    int eid;
    char ename[20];
    double salary;
    Employee(){
        cout<<"In default Contructor"<<endl;
        this->eid=0;
        strcpy(this->ename,"none");
        this->salary=0;
    }
    Employee(int id,char* name,double sal){
        this->eid=id;
        strcpy(this->ename,name);
        this->salary=sal;
    }
    void setId(int id){
        this->eid=id;
    }
    void setName(char* name){
        strcpy(this->ename,name);
    }
    void setSalary(double sal){
        this->salary=sal;
    }
    int getId(){
        return this->eid;
    }
    char* getName(){
        return this->ename;
    }
    double getSalary(){
        return this->salary;
    }
    void display(){
        cout<<"Employee id is : "<<eid<<endl;
        cout<<"Employee Name is : "<<ename<<endl;
        cout<<"Employee salary is : "<<salary<<endl;
    }
    double calSalary(){
        return salary;
    }

};
class HR : public Employee{
    public:
    double commision;
    HR(){
        this->commision=0;
    }
    HR(int id ,char* name,double sal,double com){
        this->eid=id;
        strcpy(this->ename,name);
        this->salary=sal;
        this->commision=com;
    }
    void setCommision(float comm){
        this->commision=comm;
    }
    double getCommision(){
        return this->commision;
    }

    void display(){
        cout<<"HR commison is : "<<this->commision<<endl;
    }
    double calSalary(){
        return salary+(salary*commision/100);
    }
    

};
class SalesManager : public Employee{
    public:
    int target;
    double incentive;
    SalesManager(){
        this->target=0;
        this->incentive=0;
    }
    SalesManager(int id,char* name,double sal,int t,double in){
        this->eid=id;
        strcpy(this->ename,name);
        this->salary=sal;
        this->target=t;
        this->incentive=in;
    }
    void setTarget(int t){
        this->target=t;
    }
    void setIncentive(double in){
        this->incentive=in;
    }
    int getTarget(){
        return this->target;
    }
    double getIncentive(){
        return this->incentive;
    }
    void display(){
        cout<<"SalesManager Incentive : "<<incentive<<endl;
        cout<<"SalesManager Target : "<<target<<endl;
    }
    double calSalary(){
        return salary+incentive;
    }
};
class Admin : public Employee{
    public:
    double allowance;
    Admin(){
        this->allowance=0;
    }
    Admin(int id,char* name,double sal,double allo){
        this->eid=id;
        strcpy(this->ename,name);
        this->salary=sal;
        this->allowance=allo;
    }
    void setAllowance(int al){
        this->allowance=al;
    }
    double getAllowance(){
        return this->allowance;
    }
    double calSalary(){
        return salary+allowance;
    }
};
int main(){
    
    HR h1(1,"vishal",50000,10);
    cout<<"------------HR Employee-----------"<<endl;
    h1.display();
    cout<<"Total Salary : "<<h1.calSalary()<<endl;

    SalesManager sm(2, "Rahul", 60000, 500000, 20000);
    cout<<"------------SalesManager Employee-----------"<<endl;
    sm.display();
    cout << "Total Salary : "<<sm.calSalary()<<endl;

    Admin a(3,"Rohit",55000,15000);
    cout<<"-----------Admin Employee----------"<<endl;
    a.display();
    cout << "Total Salary : "<<a.calSalary()<<endl;
}