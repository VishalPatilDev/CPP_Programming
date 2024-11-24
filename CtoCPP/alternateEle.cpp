#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    cout<<"Enter elements of array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Printing alternate elements in array : ";
    for(int i=0;i<size;i=i+2){
        cout<<arr[i]<<" ";
    }

}