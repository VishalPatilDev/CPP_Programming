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
    Product(int id,char* nm,double p,int q){
        this->id=id;
        strcpy(this->name,nm);
        this->price=p;
        this->quantity=q;
    }
    int getId(){
        return this->id;
    }
    char* getName(){
        return this->name;
    }
    double getPrice(){
        return this->price;
    }
    int getQuantity(){
        return this->quantity;
    }
    virtual void display()=0;
    
};
double Product::discount=0;
class Electronics:public Product{
    int warrentyPeriod;
    char brand[20];
    public:
    Electronics(int id,char* nm,double p,int q,int wp,char* b):Product(id,nm,p,q){
        this->warrentyPeriod=wp;
        strcpy(this->brand,b);
    }
    int getWP(){
        return warrentyPeriod;
    }
    char* getBrand(){
        return brand;
    }
    void display(){
        cout<<"Id : "<<getId();
        cout<<"Name : "<<getName();
        cout<<"Price : "<<getPrice();
        cout<<"Quantity : "<<getQuantity();
        cout<<"Warrenty Period : "<<getWP();
        cout<<"Brand : "<<getBrand();
    }
    double calDiscount(){
        int finalPrice=getPrice()*(1-10/100);
        return finalPrice;
    }
};
class Clothing:public Product{
    int size;
    char material[20];
    public:
    Clothing(int id,char* nm,double p,int q,int s,char* m):Product(id,nm,p,q){
        this->size=s;
        strcpy(this->material,m);
    }
    int getSize(){
        return size;
    }
    char* getMaterial(){
        return material;
    }
    void display(){
        cout<<"Id : "<<getId();
        cout<<"Name : "<<getName();
        cout<<"Price : "<<getPrice();
        cout<<"Quantity : "<<getQuantity();
        cout<<"Warrenty Period : "<<getSize();
        cout<<"Brand : "<<getMaterial();
    }
    double calDiscount(){
        int finalPrice=getPrice()*(1-20/100);
        return finalPrice;
    }
};
class Grocery:public Product{
    int expirationDate;
    double weight;
    public:
    Grocery(int id,char* nm,double p,int q,int ed,double w):Product(id,nm,p,q){
        this->expirationDate=ed;
        this->weight=w;
    }
    int getED(){
        return expirationDate;
    }
    double getWeight(){
        return weight;
    }
    void display(){
        cout<<"Id : "<<getId();
        cout<<"Name : "<<getName();
        cout<<"Price : "<<getPrice();
        cout<<"Quantity : "<<getQuantity();
        cout<<"Warrenty Period : "<<getED();
        cout<<"Brand : "<<getWeight();
    }
    double calDiscount(){
        int finalPrice=getPrice()*(1-5/100);
        return finalPrice;
    }
};
int main(){
    Product* items[10];
    int itemCount=0,choice;
    while(true){
        cout<<"\n1. Add Product \n 2. Display Products \n 3. Remove Product\n";
        cin>>choice;
        if(choice==1){
            int type,id,quantity,warrentyPeriod,size,expirationDate;
            char name[20],brand[20],material[20];
            double price,weight;
            cout<<"\n1. Electronics \n 2. Clothing \n 3. Grocery\n";
            cin>>type;
            cout<<"Enter ID : "<<endl;
            cin>>id;
            cout<<"Enter Product Name : "<<endl;
            cin>>name;
            cout<<"Enter Price of Product : "<<endl;
            cin>>price;
            cout<<"Enter Quantity of Product : "<<endl;
            cin>>quantity;
            if(type==1){
                cout<<"Enter Warrenty Period : "<<endl;
                cin>>warrentyPeriod;
                cout<<"Enter Brand : "<<endl;
                cin>>brand;
                items[itemCount++]=new Electronics(id,name,price,quantity,warrentyPeriod,brand);
            }
            else if(type==2){
                cout<<"Enter Size : "<<endl;
                cin>>size;
                cout<<"Enter Material : "<<endl;
                cin>>material;
                items[itemCount++]=new Clothing(id,name,price,quantity,size,material);
            }
            else if(type==3){
                cout<<"Enter Expiration Date : "<<endl;
                cin>>expirationDate;
                cout<<"Enter Weight : "<<endl;
                cin>>weight;
                items[itemCount]=new Grocery(id,name,price,quantity,expirationDate,weight);
            }
        }
        else if(choice ==2){
            if(itemCount==0){
                cout<<"No items to display"<<endl;
            }
            for(int i=0;i<itemCount;i++){
                items[i]->display();
            }
        }
        else if(choice==3){
            itemCount=-1;
            int id;
            cout<<"Enter id to remove : "<<endl;
            cin>>id;
            for(int i=0;i<itemCount;i++){
                if(items[i]->getId()==id){
                    delete items[i];
                }
            }
        }
    }
}