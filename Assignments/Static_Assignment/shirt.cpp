#include<iostream>
using namespace std;
#include<string.h>
class Shirt{
    int id;
    char name[20];
    char type[20];
    double price;
    char size;
    static int d;
    public:
    Shirt(){
        this->id=0;
        strcpy(this->name,"none");
        strcpy(this->type,"none");
        this->price=0;
        this->size='s';
    }
    Shirt(int id,char* nm,char* t,double p,char s){
        this->id=id;
        strcpy(this->name,nm);
        strcpy(this->type,t);
        this->price=p;
        this->size=s;
    }
    ~Shirt(){
        cout<<"Destructor called";
    }
    void showShirt(){
        cout<<"Id of Shirt : "<<id<<endl;
        cout<<"Name of Shirt : "<<name<<endl;
        cout<<"Type of shirt : "<<type<<endl;
        cout<<"Price of Shirt :"<<price<<endl;
        cout<<"Size of Shirt : "<<size<<endl;
    }
    double calPrice(){
        switch(size){
            case 's':
                return price;
            case 'm':
                return price*(1+d/100.0);
            case 'l':
                return price*(1+2*d/100,0);
            case 'x':
                return price*(1+3*d/100.0);
            default:
                cout<<"Invalid size"<<endl;
                return 0;
        }
    }
};
int Shirt::d=10;
int main(){
    char size;
    cin>>size;
    Shirt s(1,"shirt1","formal",1000,size);
    s.showShirt();
    double updatedPrice = s.calPrice();
    if (updatedPrice != 0) {
        cout << "Updated Price of Shirt: " << updatedPrice << endl;
    }
}