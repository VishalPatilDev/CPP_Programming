#include<iostream>
using namespace std;
#include<string.h>
class Book{
    int id;
    char bookName[20];
    double price;
    char authorName[20];
    static int count;
    public:
    Book(){
        count++;
        this->id=0;
        strcpy(this->bookName,"None");
        this->price=0;
        strcpy(this->authorName,"none");
    }
    Book(int id,const char* bn,double p,char* an){
        count++;
        this->id=id;
        strcpy(this->bookName,bn);
        this->price=p;
        strcpy(this->authorName,an);
    }
    void static getCount(){
        cout<<"Count = "<<count;
    }
    void showBook(){
        cout<<"Id of Book : "<<id<<endl;
        cout<<"Name of Book : "<<bookName<<endl;
        cout<<"Price of Book : "<<price<<endl;
        cout<<"Author of Book : "<<authorName<<endl;
    }
    ~Book(){}
};
int Book::count=0;

int main(){
    Book b(101,"James",300,"SM");
    b.showBook();
    Book::getCount();
}