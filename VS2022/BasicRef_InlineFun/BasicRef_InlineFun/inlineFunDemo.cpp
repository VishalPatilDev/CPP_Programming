//inline functions

#include<iostream>
using namespace std;

inline int calmax(int n1, int n2)
{
	return (n1 > n2) ? n1 : n2;
}

int main()
{
	double num1 = 10, num2 = 23, max;
	max = calmax(num1, num2);
	cout << "\n the max is " << max;
	return 0;
}

