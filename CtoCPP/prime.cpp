#include<iostream>
using namespace std;
int main(){
    int arr[100],prime;
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    cout<<"Enter elements of array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Prime numbers in given array : ";
    for(int i =0;i<size;i++){
        prime=1;
        for(int j=2;j<arr[i]/2;j++){
            if(arr[i]%j==0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            cout<<arr[i]<<" ";
        }

    }
    

}