#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    int rem=0;
    int sum=0;
    int rev=0;
    for(int i=num;i!=0;i/=10){
        rem=i%10;
        rev=rev*10+rem;
        // sum=sum+rem;
    }
    if(rev==num){
        cout<<"Pallindrome"<<endl;
    }
    else{
        cout<<"Not Pallindrome"<<endl;
    }
}