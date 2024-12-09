#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number :"<<endl;
    cin>>num;
    int prime=1;
    for(int i=2;i<=num/2;i++){
        
        if(num%i==0){
            prime=0;
            break;
        }
        else{
            prime=1;
        }

    }
    if(prime){
        cout<<"Number is prime "<<endl;
    }
    else{
        cout<<"Number is not prime "<<endl;
    }

}