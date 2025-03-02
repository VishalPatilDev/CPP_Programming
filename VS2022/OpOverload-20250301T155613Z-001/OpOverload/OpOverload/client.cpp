#include "Phone.h"
int main() {
	string ph;
	cout << "enter number : ";
	cin >> ph;
	ValidatePhone v(ph);
	cout<<v.operator!();
}