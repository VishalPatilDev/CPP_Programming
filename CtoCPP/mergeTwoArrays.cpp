#include<iostream>
using namespace std;
int main(){
    int arr1[100],arr2[100],arr3[100],size1,size2,size3;
    cout<<"Enter size of first array : ";
    cin>>size1;
    printf("Enter elements of first array : ");
    cout<<"Enter elements of first array : ";
    for(int i = 0;i<size1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter size of second array : ";
    cin>>size2;
    cout<<"Enter elements of second array :";
    for(int i = 0;i<size2;i++){
        cin>>arr2[i];
    }
    size3=size1+size2;
    for(int i=0;i<size1;i++){
        arr3[i]=arr1[i];
    }
    for(int i=0;i<size2;i++){
        arr3[i+size1]=arr2[i];
    }
    cout<<"The merged array is : ";
    for(int i=0;i<size3;i++){
        cout<<arr3[i]<<" ";
    }

}