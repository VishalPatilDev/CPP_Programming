#include<iostream>
using namespace std;
int main(){
    int arr1[100],size1,sum1=0;
    cout<<"Enter size1 of array : ";
    cin>>size1;
    cout<<"Enter elements in array : ";
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<size1;i++){
        sum1=sum1+arr1[i];
    }

    int arr2[100],size2,sum2=0;
    cout<<"Enter size1 of array : ";
    cin>>size2;
    cout<<"Enter elements in array : ";
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<size2;i++){
        sum2=sum2+arr2[i];
    }
    cout<<"Sum of two given array elements = "<<sum1+sum2;
}