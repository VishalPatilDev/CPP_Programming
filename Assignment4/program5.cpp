using namespace std;
#include<iostream>
#include<string.h>
class Defence
{
	public:
	char uniform[20];
	char major[20];
	Defence()
	{
		cout<<"default Defence:";
		strcpy(this->uniform,"none");
        strcpy(this->major,"none");
	}
	Defence(const char* u,const char* m)
	{
		strcpy(this->uniform,u);
        strcpy(this->major,m);
	}
	
	void setUniform(const char* u)
	{
		strcpy(this->uniform,u);
	}
	void setMajor(const char* m){

        strcpy(this->major,m);
    }
	
	const char* getUniform()
	{
		return this->uniform;
	}
	const char* geMajor()
	{
		return this->major;
	}
	void display()
	{
		cout<<"uniform of Defence:"<<this->uniform<<endl;
		cout<<"major of Defence:"<<this->major<<endl;
	}
};
class Army:public Defence
{
	public:
	int noOfSoldiers;
    int noOfGuns;
	
	Army():Defence()
	{
		cout<<"\ndefault Army constructor:";
	}
	Army(const char* u,const char* m,int s,int g):Defence(u,m)
	{
		this->noOfSoldiers=s;
        this->noOfGuns=g;
	}
	void setSoldiers(int sol)
	{
		this->noOfSoldiers=sol;
	}
	void setGuns(int guns){
		this->noOfGuns=guns;
	}
	void display()
	{
		cout<<"\n------------------------Army--------------------------\n";
		Defence::display();
		
		cout<<"Army No of Soldiers : "<<this->noOfSoldiers<<endl;
		cout<<"Army NO. of Guns : "<<this->noOfGuns<<endl;
	}
};
class Navy:public Defence{
	public:
	int noOfShips;
	Navy(){
		this->noOfShips=0;
	}
	Navy(const char* uniform,const char* major,int ships):Defence(uniform,major){
		this->noOfShips=ships;
	}
	void setShips(int ships){
		this->noOfShips=ships;
	}
	int getShips(){
		return this->noOfShips;
	}
	void display(){
		Defence::display();
		cout<<"Navy Number of Ships : "<<noOfShips<<endl;
	}
};

int main(){
	Navy n("black","NavyMajor",100);
	n.display();

	Army a("green","ArmyMajor",100,50);
	a.display();

}