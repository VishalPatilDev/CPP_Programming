#include "books.h"
using namespace std;
int main() {
	Book* barr;
	int size;
	cout << "Enter number of books you want to enter : ";
	cin >> size;
	barr = new Book[size];
	string bn;
	string an;
	string c;
	double p;
	for (int i = 0; i < size; i++) {
		cout << "Enter book details";
		cin >> bn >> an >> c >> p;
		barr[i].setBookName(bn);
		barr[i].setAuthName(an);
		barr[i].setCategory(c);
		barr[i].setPrice(p);
	}



	for (int i = 0; i < size; i++) {
		barr[i].display();
	}
	string cat;
	for (int i = 0; i < size; i++) {
		cout << "Enter Category";
		cin >> cat;
		if (cat == barr[i].getCategory()) {
			barr[i].display();

		}
	}
	return 0;
}