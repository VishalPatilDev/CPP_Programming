#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    int rem=0;
    for(int i=num;i!=0;i/=10){
        rem=i%10;
    }
    int lastDigit=num%10;
    cout<<"The sum of first and last digit is : "<<rem+lastDigit<<endl;
}