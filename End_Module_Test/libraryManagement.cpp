#include<iostream>
using namespace std;
#include<string.h>
class LibraryItem{
    char title[20];
    char author[20];
    int publicationYear;
    int itemId;
    public:
    LibraryItem(char* t,char* a,int y,int id){
        strcpy(this->title,t);
        strcpy(this->author,a);
        this->publicationYear=y;
        this->itemId=id;
    }
    void setTitle(char* t){
        strcpy(this->title,t);
    }
    void setAuthor(char* a){
        strcpy(this->author,a);
    }
    void setYear(int y){
        this->publicationYear=y;
    }
    void setId(int id){
        this->itemId=id;
    }
    char* getTitle(){
        return this->title;
    }
    char* getAuthor(){
        return this->author;
    }
    int getYear(){
        return this->publicationYear;
    }
    int getId(){
        return this->itemId;
    }
    virtual void displayDetails()=0;
};
class Book:public LibraryItem{
    int isbn;
    int nOfPages;
    public:
    // Book(){
    //     this->isbn=0;
    //     this->nOfPages=0;
    // }
    Book(char* t,char* a,int y ,int id,int isbn,int n):LibraryItem(t,a,y,id){
        this->isbn=isbn;
        this->nOfPages=n;
    }
    void setISBN(int isbn){
        this->isbn=isbn;
    }
    void setNOfPages(int n){
        this->nOfPages=n;
    }
    int getISBN(){
        return this->isbn;
    }
    int getNOfPages(){
        return this->nOfPages;
    }
    void displayDetails(){
        cout<<"---------Book-------------="<<endl;
        cout<<"Title : "<<getTitle()<<endl;
        cout<<"Author : "<<getAuthor()<<endl;
        cout<<"Publication Year : "<<getYear()<<endl;
        cout<<"Item id : "<<getId()<<endl;
        cout<<"ISBN NO : "<<getISBN()<<endl;
        cout<<"No of Pages of : "<<getNOfPages()<<endl;
    }
};
class Magazine:public LibraryItem{
    int issueNumber;
    int volumeNumber;
    public:
    Magazine(char* t,char* a,int y,int id,int in,int vn):LibraryItem(t,a,y,id){
        this->issueNumber=in;
        this->volumeNumber=vn;
    }
    void setIN(int in){
        this->issueNumber=in;
    }
    void setVN(int vn){
        this->volumeNumber=vn;
    }
    int getIN(){
        return this->issueNumber;
    }
    int getVN(){
        return this->volumeNumber;
    }
    void displayDetails(){
        cout<<"------Magazine---------"<<endl;
        cout<<"Title : "<<getTitle()<<endl;
        cout<<"Author : "<<getAuthor()<<endl;
        cout<<"Publication Year : "<<getYear()<<endl;
        cout<<"Item id : "<<getId()<<endl;
        cout<<"Issue Number : "<<getIN()<<endl;
        cout<<"Volume Number : "<<getVN()<<endl;
    }
};
class DVD:public LibraryItem{
    double duration;
    double rating;
    public:
    DVD(char* t,char* a,int y,int id,double d,double r):LibraryItem(t,a,y,id){
        this->duration=d;
        this->rating=r;
    }
    void setDuration(double d){
        this->duration=d;
    }
    void setRating(double r){
        this->rating=0;
    }
    double getDuration(){
        return this->duration;
    }
    double getRating(){
        return this->rating;
    }
    void displayDetails(){
        cout<<"-------DVD--------"<<endl;
        cout<<"Title : "<<getTitle()<<endl;
        cout<<"Author : "<<getAuthor()<<endl;
        cout<<"Publication Year : "<<getYear()<<endl;
        cout<<"Item id : "<<getId()<<endl;
        cout<<"Duration : "<<getDuration()<<endl;
        cout<<"Rating  : "<<getRating()<<"*"<<endl;
    }
};
int main(){
    LibraryItem* items[10];
    int itemCount = 0, choice;
    while(true){
        cout<<"\n1: Add Item\n2: Display Items\n3: Remove Item"<<endl;
        cin>>choice;
        if (choice==1) {
            int type,year,id,isbn,nPages,issue,volume;
            char title[20],author[20];
            double duration,rating;
            cout<<"1: Book\n2: Magazine\n3: DVD\n";
            cin>>type;
            cout<<"Enter Title: ";
            cin>>title;
            cout<<"Enter Author: ";
            cin>>author;
            cout<<"Enter Publication Year: ";
            cin>>year;
            cout<<"Enter Item ID: ";
            cin>>id;
            if (type==1) {
                cout<<"Enter ISBN: ";
                cin>>isbn;
                cout<<"Enter Number of Pages: ";
                cin>>nPages;
                items[itemCount++]=new Book(title,author,year,id,isbn,nPages);
            } else if(type==2){
                cout << "Enter Issue Number: ";
                cin >> issue;
                cout << "Enter Volume Number: ";
                cin >> volume;
                items[itemCount++]= new Magazine(title,author,year,id,issue,volume);
            } else if(type==3){
                cout<<"Enter Duration: ";
                cin >>duration;
                cout<<"Enter Rating: ";
                cin>>rating;
                items[itemCount++]=new DVD(title,author,year,id,duration,rating);
            }
        }else if(choice==2){
            if(itemCount==0){
                cout << "No items in the library"<<endl;
            } else {
                for(int i=0;i<itemCount;i++) {
                    items[i]->displayDetails();
                }
            }
        }else if(choice==3){
            if(itemCount==0){
                cout<<"No items in the library"<<endl;
            }else{
                int id;
                cout<<"Enter the Item ID to remove: ";
                cin>>id;
                int indexToRemove=-1;
                for(int i=0;i<itemCount;i++){
                    if(items[i]->getId()==id){
                        indexToRemove=i;
                        break;
                    }
                }
                if(indexToRemove==-1){
                    cout<< "Item not found"<<endl;
                }else{
                    delete items[indexToRemove];
                    for(int i=indexToRemove;i<itemCount-1;i++){
                        items[i]=items[i+1];
                    }
                    itemCount--;
                }
            }
        }else{
            cout << "Invalid choice. Please try again.\n";
        }
    }
}