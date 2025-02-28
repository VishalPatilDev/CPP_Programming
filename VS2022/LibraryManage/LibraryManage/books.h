#pragma once
#include<iostream>
using namespace std;
#define MAX books 100;
class Book {
private:
	int isbn;
	string bookName;
	string category;
	string authName;
	double price;

	static int count;
	static string libName;
public:
	Book() {
		count++;
		isbn = count;
		bookName = "NA";
		category = "NA";
		authName = "NA";
		price = 0.0;

	}
	Book(int isbn, string bookName, string authName, double price) {
		count++;
		isbn = count;
		this->isbn = isbn;
		this->bookName = bookName;
		this->category = category;
		this->authName = authName;
		this->price = price;
	}
	void setBookName(string bookName) {
		this->bookName = bookName;
	}

	void setCategory(string category) {
		this->category = category;
	}
	void setAuthName(string authName) {
		this->authName = authName;
	}
	void setPrice(double price) {
		this->price = price;
	}
	string getCategory() {
		return category;
	}
	void display() {
		cout << "ISBN : " << isbn << "\n Book Name : " << bookName << "\n Category : " << category << "\n Author Name : " << authName << "\n Price : " << price;
	}




};
int Book::count = 1000;
string Book::libName = "IACSD";