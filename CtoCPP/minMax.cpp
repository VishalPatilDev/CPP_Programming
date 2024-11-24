#include<iostream>
using namespace std;
int main(){
    int arr[100],size;
    
    cout<<"Enter size of array : ";
    cin>>size;
    cout<<"Enter elements of array : ";
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"Minimum value in given array is : "<<min;
    cout<<"Maximum value in given array is : "<<max;

}