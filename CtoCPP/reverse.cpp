#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    cout<<"Enter elements of array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int temp;
    for(int i=0;i<size/2 ;i++){
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
    cout<<"Reversed array is :";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}