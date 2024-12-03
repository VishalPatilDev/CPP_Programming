#include<iostream>
#include<string.h>
using namespace std;
class BankAccount{
    int AcNo;
    char name[20];
    double balance;
    double interestRate;
    public:
    BankAccount(){
        this->AcNo=0;
        strcpy(this->name,"none");
        this->balance=0;
        this->interestRate=0;
    }
    BankAccount(int ac,const char* nm,double bal,double ir){
        this->AcNo=ac;
        strcpy(this->name,nm);
        this->balance=bal;
        this->interestRate=ir;
    }
    void setAccountNo(int ac){
        this->AcNo=ac;
    }
    void setName(const char* nm){
        strcpy(this->name,nm);
    }
    void setBalance(double bal){
        this->balance=bal;
    }
    void setInterestRate(double ir){
        this->interestRate=ir;
    }
    int getAc(){
        return this->AcNo;
    }
    char* getName(){
        this->name;
    }
    double getBalance(){
        return this->balance;
    }
    double getIR(){
        return this->interestRate;
    }
    void display(){
        cout<<"Account Number is : "<<this->AcNo<<endl;
        cout<<"Name of Ac Holder is : "<<this->name<<endl;
        cout<<"Balance is : "<<this->balance<<endl;
        cout<<"Interest Rate is : "<<this->interestRate<<endl;
    }

};
int main(){
    BankAccount b(23423485,"vishal",400000,20);
    b.display();
}