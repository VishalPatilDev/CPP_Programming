#include<iostream>
using namespace std;
int main(){
    int arr[100],size,sum=0;
    cout<<"Enter size of array : ";
    cin>>size;
    cout<<"Enter elements in array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    cout<<"Sum of elements in given array = "<<sum;

}