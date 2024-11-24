#include<iostream>
#include<iomanip> //For std::fixed and std::steprecision
using namespace std;
int main(){
    bool b=35;
    int i=b;
    i=3.14;
    double pi=static_cast<double>(i);
    unsigned char c = -1;
    cout<<"Value of b : "<<b<<endl;
    cout<<"Value of i : "<<i<<endl;
    cout<<"Value of pi : "<<fixed<<setprecision(2)<<pi<<endl;
    cout<<"Value of c : "<<c<<endl;
    cout<<"What \?";
}