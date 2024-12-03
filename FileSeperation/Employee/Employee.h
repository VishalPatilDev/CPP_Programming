class Employee{
    int id;
    char name[20];
    double sal;
    public:
    Employee();
    Employee(int id,const char* nm,double sal);
    void setId(int id);
    void setName(const char* nm);
    void setSal(double sal);
    int getId();
    double getSal();
    char* getName();
    virtual double calSal()=0;
    void display();
};
class SalesManager:public Employee{
    double incentive;
    int target;
    public:
    SalesManager();
    SalesManager(int id,const char* nm,double sal,double incen,int target);
    void setIncentive(double insentive);
    void setTarget(int target);
    double getIncentive();
    int getTarget();
    double calSal();
    void display();
};
class Admin:public Employee{
    double allowance;
    public:
    Admin();
    Admin(int id,const char* nm,double sal,double allowance);
    void setAllowance(double allowance);
    double getAllowance();
    double calSal();
    void display();
};
class HR:public Employee{
    double commission;
    public:
    HR();
    HR(int id,const char* nm,double sal,double commission);
    void setCommission(double commission);
    double getCommision();
    double calSal();
    void display();
};