#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter Rows : "<<endl;
    cin>>rows;
    for(int i=1;i<=rows;i++){
        for(int space=1;space<=rows-1;space++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<'A';
        }
        cout<<endl;
    }
}