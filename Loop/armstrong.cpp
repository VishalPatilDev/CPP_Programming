#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    int count=0,cnt,rem=0,mul=1,result=0;
    for(int i=num;i!=0;i/=10){
        count++;
    }
    count--;
    cnt=count;
    for(int i=num;i!=0;i/=10){
        rem=i%10;
        while(cnt!=0){
            mul=mul*rem;
            cnt--;
        }
        result=result+mul;
        cnt=count;
        mul=1;
        result=0;
    }
    if(result==num){
        cout<<"Armstrong";
    }
}