    #include "Employee.h"
    #include<iostream>
    using namespace std;

    void allEmpDetails(Employee* ep){
        cout<<"ID : "<<ep->getId()<<endl;
        cout<<"Name : "<<ep->getName()<<endl;
        cout<<"Salary : "<<ep->getSal()<<endl;
        //Blind Cast / Static Cast

        // SalesManager* sp = (SalesManager*)ep;
        // cout<<sp->getIncentive();

        //Dynamic Cast
        SalesManager* sp = dynamic_cast<SalesManager*>(ep);
        if(sp!=NULL){
            cout<<"Salary of SalesManager : "<<sp->calSal();
        }
        Admin* ap = dynamic_cast<Admin*>(ep);
        if(ap!=NULL){
            cout<<"Salary of Admin : "<<ap->calSal();
        }
        HR* hp = dynamic_cast<HR*>(ep);
        if(hp!=NULL){
            cout<<"Salary of HR : "<<hp->calSal();
        }

    }

    int main() {
        SalesManager s(101, "Vishal", 400000, 40000, 10);
        cout<<"-----Salesmanager display --------"<<endl;
        s.display();
        // Employee* ep;
        // ep=&s;
        // ep->display();
        Admin a(101, "Vishal", 400000, 43000);
        cout<<"-----Admin display --------"<<endl;
        a.display();
        HR h(101, "Vishal", 400000, 50);
        cout<<"-----HR display --------"<<endl;
        a.display();
        cout << "allEmpDetails:" << endl;
        allEmpDetails(&s);
        cout << endl;
        allEmpDetails(&a);
        cout << endl;
        allEmpDetails(&h);
    }
