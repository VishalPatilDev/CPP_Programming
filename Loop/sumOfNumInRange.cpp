#include<iostream>
using namespace std;
int main(){
    int start,end;
    cout<<"Enter Starting Number : "<<endl;
    cin>>start;
    cout<<"Enter Ending Number : ";
    cin>>end;
    int sum=0;
    for(int i=start;i<=end;i++){
        sum=sum+i;
    }
    cout<<"Sum = "<<sum;
}