#include "Order.h"
int main() {
	int nopos;
	cout << "Enter number of products: ";
	cin >> nopos;
	Order o1(nopos);
	o1.accept();
	o1.display();
	o1.calculateorder();
	{
		Order o2(o1);
		o2.display();
		o2.calculateorder();
	}

}