using namespace std;
#include<iostream>
#include<string.h>
struct Employee
{
	int id;
	char name[20];
	double salary;
	
	Employee()
	{
		cout<<"default employee constructor:"<<endl;
		this->id=0;
		strcpy(this->name,"none");
		this->salary=0.0;
	}
	Employee(int a,char* b,double c)
	{
		this->id=a;
		strcpy(this->name,b);
		this->salary=c;
	}
	void setid(int a)
	{
		this->id=a;
		
	}
	void setname(char* b)
	{
		strcpy(this->name,b);
	}
	void setsalary(double c)
	{
		this->salary=c;
	}
	int getid()
	{
		return this->id;
	}
	char* getname()
	{
		return this->name;
	}
	double getsalary()
	{
		return this->salary;
	}
	virtual void display()
	{
		cout<<"\nemp id:"<<this->id;
		cout<<"\nemp name:"<<this->name;
		cout<<"\nemp salary:"<<this->salary;
		
	}
};

struct HR:public Employee
{
	double commission;
	int target;
	
	HR():Employee()
	{
		cout<<"\ndefault Hr constructor";
	}
	HR(int a,char* b,double c ,double d,int t):Employee(a,b,c)
	{
		this->commission=d;
		this->target=t;
	}
	void setcommission(double d)
	{
		this->commission=d;
	}
	void settarget(int t)
	{
		this->target=t;
	}
	double getcommission()
	{
		return this->commission;
	}
	int gettarget()
	{
		return this->target;
	}
	void display()
	{
		Employee::display();
		cout<<"\nemp commission:"<<this->commission;
		cout<<"\nemp target:"<<this->target;
	}
};
struct SalesManager :public Employee
{
    double incentive;
	int target;
	
	SalesManager():Employee()
	{
		cout<<"\ndefault SalesManager constructor:";
		this->incentive=0.0;
		this->target=0;
	}
	SalesManager(int a,char* b,double c,double d,int t):Employee(a,b,c)
	{
		this->incentive=d;
		this->target=t;
	}
	void setincentive(double d)
	{
		this->incentive=d;
	}
	void settarget(int t)
	{
		this->target=t;
	}
	double getincentive()
	{
		return this->incentive;
	}
	int gettarget()
	{
		return this->target;
	}
	void display()
	{
		Employee::display();
		cout<<"\nemp incentive:"<<this->incentive;
		cout<<"\nemp target:"<<this->target;
		cout<<"\n---------------salce ends---------------------";
	}
};
struct Admin:public Employee
{
	
    double allowance;
    Admin():Employee()
    {
    	cout<<"\nemp allounce:";
    	this->allowance=0.0;
	}
	Admin(int a,char* b,double c,double d):Employee(a,b,c)
	{
		this->allowance=d;
	}
	void setallowance(double d)
	{
		this->allowance=d;
	}
	double getallowance()
	{
		return this->allowance;
	}
	void display()
	{
		Employee::display();
		cout<<"\nemp allowance:"<<this->allowance;
	}
		
};
int main()
{
    Employee* ep; //generic pointer
	Employee e1(101,"Sachin",200000);
    ep=&e1;
    ep->display();

    SalesManager s1(102,"Rahul",30000,300,30);
    ep=&s1;
    ep->display();

    Admin a1(103,"Virat",40000,40);
    ep=&a1;
    ep->display();
}