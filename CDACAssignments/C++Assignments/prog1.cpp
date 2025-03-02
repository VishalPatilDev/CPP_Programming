#include <iostream>
using namespace std;
class Student
{
private:
    int rollNo;
    string name;
    double marks;

public:
    Student()
    {
        rollNo = 0;
        name = "NA";
        marks = 0.0;
    }
    Student(int rollNo, string name, double marks)
    {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }
    void accept()
    {
        cout << "Enter Student Details : " << endl;
        cin >> rollNo >> name >> marks;
    }
    void display()
    {
        cout << "Student Details -------" << endl;
        cout << rollNo << endl
             << name << endl
             << marks << endl;
    }
};
int main()
{
    Student s1(101, "vishal", 100);
    s1.display();

    Student s;
    s.accept();
    s.display();
}