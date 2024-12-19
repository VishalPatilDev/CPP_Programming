#include<iostream>
#include<string.h>
using namespace std;
int checkBirthday(char* month,int date){
    if(strcmp(month,"july")==0 && date==5){
        return 1;
    }
    return 0;
}
int main(){
    char month[20];
    int date;
    cout<<"Enter Month : "<<endl;
    cin>>month;
    cout<<"Enter Date : "<<endl;
    cin>>date;
    if(checkBirthday(month,date)){
        cout<<"Lisa Today is Your Birthday "<<endl;
    }
    else{
        cout<<"Today is not Lisa's Birthday "<<endl;
    }
}