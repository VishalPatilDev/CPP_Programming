#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    int rem=0;
    int fact=1;
    int sum=0;
    for(int i=num;i!=0;i/=10){
        rem=i%10;
        for(int j=1;j<=rem;j++){
            fact=fact*j;
        }
        
        sum=sum+fact;
        fact=1;
    }
    if(sum==num){
        cout<<"Strong number "<<endl;

    }
    else{
        cout<<"Not a strong number "<<endl;
    }
}
