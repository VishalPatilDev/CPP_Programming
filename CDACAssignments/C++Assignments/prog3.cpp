#include <iostream>
using namespace std;
class Book
{
private:
    int bno;
    string bname;
    string author;
    string edition;
    double price;
    int qty;
    double bill;
    double discount;
    double netbill;

public:
    Book()
    {
        bno = 0;
        bname = "NA";
        author = "NA";
        edition = "NA";
        price = 0;
        qty = 0;
        bill = 0;
        discount = 0;
        netbill = 0;
    }
    Book(int bno,
         string bname,
         string author,
         string edition,
         double price,
         int qty)
    {
        this->bno = bno;
        this->bname = bname;
        this->author = author;
        this->edition = edition;
        this->price = price;
        this->qty = qty;
    }
    void accept()
    {
        cout << "Enter Book Details : " << endl;
        cout << "book number : " << endl;
        cin >> bno;
        cout << "Author : ";
        cin >> author;
        cout << "\nedition : ";
        cin >> edition;
        cout << "\nprice : ";
        cin >> price;
        cout << "\n bill  : ";
        cin >> bill;
        cout << "\ndiscount : ";
        cin >> discount;
        cout << "\nnetbill :";
        cin >> netbill;
    }
    void display()
    {
        cout << "Book Details--------" << endl;
        cout << bno << endl
             << author << endl
             << edition << endl
             << price << endl
             << "Bill = "
             << bill << endl
             << "Discount ="
             << discount << endl
             << "Netbill ="
             << netbill << endl;
    }
    void calBill()
    {
        bill = price * qty;
        discount = 0.05 * bill;
        netbill = bill - discount;
    }
};
int main()
{
    Book b(1, "v", "v", "p", 250, 2);
    b.calBill();
    b.display();
    return 0;
}