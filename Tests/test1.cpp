#include<string.h>
#include<iostream>
using namespace std;
class BankAccount{
    char name[20];
    int AcNo;
    char type[20];
    double balAmount;
    public:
    BankAccount(){
        strcpy(this->name,"none");
        this->AcNo=0;
        strcpy(this->type,"none");
        this->balAmount=0.0;
    }
    BankAccount(const char* nm,int ac,const char* toa,double bal){
        strcpy(this->name,nm);
        this->AcNo=ac;
        strcpy(this->type,toa);
        this->balAmount=bal;
    }
    void setName(char* nm){
        strcpy(this->name,nm);
    }
    void setAcNo(int ac){
        this->AcNo=ac;
    }
    void setBal(double bal){
        this->balAmount=bal;
    }
    void setType(char* toa){
        strcpy(this->type,toa);
    }
    char* getName(){
        return this->name;
    }
    int getAC(){
        return this->AcNo;
    }
    char* getType(){
        return this->type;
    }
    double getAmt(){
        return balAmount;
    }
    void deposit(double amt){
        this->balAmount=this->balAmount+amt;
    }
    double withdraw(double am){
        if(balAmount<3000){
            return 0;
        }
        else{
            this->balAmount-=am;
        }
    }
    void display(){
        cout<<"Name of Ac Holder : "<<name<<endl;
        cout<<"Account NO of Ac Holder : "<<AcNo<<endl;
        cout<<"Type of Ac : "<<type<<endl;
        cout<<"Balance Amount in the Account : "<<balAmount<<endl;
    }
};
int main(){
    BankAccount b("Sbi",234235235,"savings",1000.00);
    b.deposit(500);
    if(b.withdraw(5000)==0){
        cout<<"OOPS! YOU CAN'T WITHDRAW MONEY AS YOUR MINUMUM BALANCE IS LOW"<<endl;
        b.display();
    }
    else{
        b.display();
    }
}