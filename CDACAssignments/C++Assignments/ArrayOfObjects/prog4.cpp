#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int rollNo;
    int *marks;

public:
    Student()
    {
        name = "NA";
        rollNo = 0;
        marks = new int[5];
    }
    Student(string name, int rollNo, int *marks)
    {
        this->name = name;
        this->rollNo = rollNo;
        this->marks = new int[5];
    }
    void getDetails()
    {
        cout << "Enter name : " << endl;
        cin >> name;
        cout << "Enter Roll NO : " << endl;
        cin >> rollNo;
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter Marks of Sub " << i + 1 << endl;
            cin >> marks[i];
        }
    }
    void displayDetails()
    {
        cout << "Name = " << name << endl;
        cout << "RollNo = " << rollNo << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Marks of Sub " << i + 1 << " = " << marks[i];
        }
    }
};
int main()
{
    Student *s;
    s = new Student[10];
    for (int i = 0; i < 10; i++)
    {
        s[i].getDetails();
    }
    for (int i = 0; i < 10; i++)
    {
        s[i].displayDetails();
    }
}