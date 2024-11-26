#include<iostream>
using namespace std;
int main(){
    int* ptr;
    int size=5;
    ptr=new int[size];
    for(int i=0;i<size;i++){
        // scanf("%d",ptr+i);
        cin>>*(ptr+i);
    }
    for(int i=0;i<size;i++){
        cout<<*(ptr+i);
    }
    cout<<endl;
    delete[] ptr;
    cout<<*(ptr+3);
}