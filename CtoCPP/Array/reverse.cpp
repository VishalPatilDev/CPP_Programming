#include<iostream>
using namespace std;
namespace SY{
    class SYMARKS{
        int comTotal;
        int mathTotal;
        int elecTotal;
        public:
        SYMARKS(){
            this->comTotal=0;
            this->mathTotal=0;
            this->elecTotal=0;
        }
        void setComTotal(int com){
            this->comTotal=com;
        }
        int getComTotal(){
            return this->comTotal;
        }
    };
}
namespace TY{
    class TYMARKS{
        int theory;
        int practical;
        public:
        TYMARKS(){
            this->theory=0;
            this->practical=0;
        }
        void setTheory(int t){
            this->theory=t;
        }
        void setPractical(int p){
            this->practical=p;
        }
        int getTheory(){
            return this->theory;
        }
        int getPractical(){
            return this->practical;
        }
    };
}
class Student{
    int rollNo;
    char name[20];
    public:
    SY::SYMARKS sobj;
    TY::TYMARKS tobj;
    
    void setMarks(int m){
        sobj.setComTotal(m);
    }
    void setTheoryMarks(int t){
        tobj.setTheory(t);
    }
    void setPracMarks(int p){
        tobj.setPractical(p);
    }
    
    int totalMarks(){
        return (sobj.getComTotal()+tobj.getPractical()+tobj.getTheory());
    }
    const char* calGrade(){
        if(totalMarks()>=70){
            return "A";
        }
        else if(totalMarks()>=60 && totalMarks()<70){
            return "B";
        }
        else if(totalMarks()>=50 && totalMarks()<60){
            return "C";
        }
        else if(totalMarks()>=40 && totalMarks()<50){
            return "Pass";
        }
        else{
            return "Fail";
        }
    }
};
int main(){
    int rollNo;
    char name[20];
    cout<<"Enter your roll no. : "<<endl;
    cin>>rollNo;
    cout<<"Enter your Name : "<<endl;
    cin>>name;
    int marks,tm,pt;
    cout<<"Enter Computer total marks : "<<endl;
    cin>>marks;
    cout<<"Enter Theory marks for computer : "<<endl;
    cin>>tm;
    cout<<"Enter Practical marks for computer : "<<endl;
    cin>>pt;
    Student s;
    s.setMarks(marks);
    s.setTheoryMarks(tm);
    s.setPracMarks(pt);
    cout<<"Roll NO : "<<rollNo<<endl<<"Name : "<<name<<endl<<"Grade : "<<s.calGrade();
    
}