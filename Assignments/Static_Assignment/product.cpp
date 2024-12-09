#include<iostream>
using namespace std;
#include<string.h>
class Product{
    int id;
    char name[20];
    double price;
    int quantity;
    static double discount;
    public:
    Product(){
        this->id=0;
        strcpy(this->name,"none");
        this->price =0;
        this->quantity=0;
    }
    Product(int id,const char* nm,double p,int q){
        this->id=id;
        strcpy(this->name,nm);
        this->price=p;
        this->quantity=q;
    }
    void showProduct(){
        cout<<"Id of Product : "<<id<<endl;
        cout<<"Name of Product : "<<name<<endl;
        cout<<"Price of Product : "<<price<<endl;
        cout<<"Quantity of Product : "<<quantity<<endl;
    }
    double calFinalPrice(){
        int finalPrice=price*(1-(discount/100));
        return finalPrice;
    }
    ~Product(){}
    
};
double Product::discount=10;
int main(){
    Product p1(101,"Tv",100000,1);
    p1.showProduct();
    cout<<p1.calFinalPrice()<<endl;
}