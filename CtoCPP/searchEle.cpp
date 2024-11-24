#include<iostream>
using namespace std;
int main(){
    int arr[10]={10,166,24,47,55,14,155,211,202};
    int num;
    cout<<"Enter number you want to search in given array : ";
    cin>>num;
    for(int i=0;i<10;i++){
        if(num==arr[i]){
            cout<<"Number found at index : "<<i+1;
            break;
        }
    }
}