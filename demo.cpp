//Find Max element in an array where the previous and further element of max is less than the max element
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,15,68,23,67,90};
    int max=arr[0];
    for(int i=1;i<=7;i++){
        // if(max<arr[i]){
            max=arr[i];
            if(arr[i-1]<max && arr[i+1]<max){
                max=arr[i];
                break;
            // }
        }
    }
    cout<<max;
}