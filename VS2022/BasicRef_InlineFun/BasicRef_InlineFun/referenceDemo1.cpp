#include<iostream>
using namespace std;

void swapNos(int& n1, int& n2);
int main()
{
	int num1 = 10, num2 = 20;
	cout << "\n Before swapping num1 " << num1 << " num2 is " << num2;
	swapNos(num1, num2);
	cout << "\n After swapping num1 " << num1 << " num2 is " << num2;
	return 0;
}
void swapNos(int& n1, int& n2)
{
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}
