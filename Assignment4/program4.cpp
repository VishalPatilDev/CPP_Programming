#include<iostream>
#include<string.h>
using namespace std;
class Player{
    public:
    char name[20];
    int age;
    Player(){
        strcpy(this->name,"none");
        this->age=0;
    }
    Player(char* nm,int age){
        strcpy(this->name,nm);
        this->age=age;
    }
    void setName(char* nm){
        strcpy(this->name,nm);
    }
    void setAge(int age){
        this->age=age;
    }
    char* getName(){
        return this->name;
    }
    int getAge(){
        return age;
    }
    void display(){
        cout<<"Name of Player : "<<name<<endl;
        cout<<"Age of Player : "<<age<<endl;
    }
};
class Criketer:public Player{
    public:
    int runs;
    Criketer():Player(){
        this->runs=0;
    }
    Criketer(char* name,int age,int rns):Player(name,age){
        this->runs=rns;
    }
    void setRuns(int rns){
        this->runs=rns;
    }
    int getRuns(){
        return runs;
    }
    void display(){
        Player::display();
        cout<<"Runs of Criket player : "<<runs<<endl;
    }
};
class Footballer:public Player{
    public:
    int goals;
    Footballer():Player(){
        this->goals=0;
    }
    Footballer(char* name,int age,int goals):Player(name,age){
        this->goals=goals;
    }
    void setGoals(int goals){
        this->goals=goals;
    }
    int getGoals(){
        return goals;
    }
    void display(){
        Player::display();
        cout<<"Goals of Football Player : "<<goals<<endl;
    }
};
int main(){
    Footballer f("messi",36,800);
    f.display();
    cout<<endl;

    Criketer c("Virat",34,12000);
    c.display();
}
