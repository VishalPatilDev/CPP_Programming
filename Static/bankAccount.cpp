#include<iostream>
#include<string.h>
using namespace std;
class BankAccount{
    int AcNo;
    char name[20];
    double balance;
    static double interestRate;
    static int count;
    public:
    BankAccount(){
        count++;
        this->AcNo=0;
        strcpy(this->name,"none");
        this->balance=0;
    }
    BankAccount(int ac,const char* nm,double bal){
        count++;
        this->AcNo=ac;
        strcpy(this->name,nm);
        this->balance=bal;
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
    static void setInterestRate(double ir){
        interestRate=ir;
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

    static void countDisplay(){
        cout<<count;
    }
    void display(){
        cout<<"Account Number is : "<<this->AcNo<<endl;
        cout<<"Name of Ac Holder is : "<<this->name<<endl;
        cout<<"Balance is : "<<this->balance<<endl;
        cout<<"Interest Rate is : "<<this->interestRate<<endl;
        // cout<<"Count : "<<count<<endl;
    }
};

double BankAccount::interestRate=10.2;
int BankAccount::count=0;

int main(){
    BankAccount* ac = new BankAccount[5];
    BankAccount b(23423485,"Vishal",400000);
    BankAccount::setInterestRate(20);
    b.display();
    BankAccount::countDisplay();
}