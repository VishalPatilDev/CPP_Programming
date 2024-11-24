#include<iostream>
using namespace std;
int main(){
    int arr[100],size;
    cout<<"Enter size of array :";
    cin>>size;
    cout<<"Enter elements in array : ";
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    int temp=arr[0];
    cout<<"Sorted array is : ";
    for(int i=0;i<size;i++){
        for(int j =i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        cout<<arr[i]<<" ";
    }

}