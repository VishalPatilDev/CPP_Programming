#include<iostream>
using namespace std;
int main(){
    int arr[100];
    
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    cout<<"Enter elements in array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    printf("Even nos in array : ");
    cout<<"Even nos in array : ";
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<"Odd nos in array : ";
    for(int i=0;i<size;i++){
        if(arr[i]%2!=0){
            cout<<arr[i]<<" ";
        }
    }
}