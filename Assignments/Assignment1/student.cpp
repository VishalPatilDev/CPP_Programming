#include<stdio.h>
#include<string.h>
struct Student{
    int rollNo;
    char name[20];
    int marks;
    Student(){
        this->rollNo=0;
        strcpy(this->name,"none");
        this->marks=0;
    }
    Student(int r,char* str,int mrks){
        this->rollNo=r;
        strcpy(this->name,str);
        this->marks=mrks;
    }
    void setRollNo(int r){
        this->rollNo=r;
    }
    void setName(char* str){
        strcpy(this->name,str);
    }
    void setMarks(int mrks){
        this->marks=mrks;
    }
    int getRollNo(){
        return this->rollNo;
    }
    char* getName(){
        return this->name;
    }
    int getMarks(){
        return this->marks;
    }
    void display(){
        printf("Roll no. is : %d\n",this->rollNo);
        printf("Name of student is : %s\n",this->name);
        printf("Marks of student is : %d\n",this->marks);
    }

};
int main(){
    Student s1;
    printf("values before setting : \n");
    s1.display();
    s1.setRollNo(10);
    s1.setMarks(50);
    s1.setName("Vishal");
    printf("-------------------------------\n");
    printf("values after setting : \n");
    s1.display();
    printf("-------------------------------\n");
    printf("parameterized contructor : \n");
    Student s2(20,"rahul",70);
    s2.display();
    
}