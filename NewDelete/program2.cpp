#include<iostream>
using namespace std;
int main(){
    int* ptr;
    ptr=new int(5);
    delete[] ptr;
    cout<<*ptr;

}