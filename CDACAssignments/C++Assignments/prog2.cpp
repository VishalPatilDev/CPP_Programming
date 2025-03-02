#include <iostream>
using namespace std;
class Employee
{
private:
    int eid;
    string name;
    double salary;
    static int count;

public:
    Employee()
    {
        count++;
        eid = count;
        name = "NA";
        salary = 0.0;
    }
    void accept()
    {
        cout << "Enter Employee Details :" << endl;
        cin >> name >> salary;
    }
    void display()
    {
        cout << "Employee Details-----" << endl;
        cout << eid << endl
             << name << endl
             << salary << endl;
    }
};
int Employee::count = 0;
int main()
{
    Employee e;
    e.accept();
    e.display();
}