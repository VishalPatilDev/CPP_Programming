#include <iostream>
using namespace std;
class Book
{
private:
    string title;
    string author;
    int pages;
    double price;

public:
    Book()
    {
        title = "NA";
        author = "NA";
        pages = 0;
        price = 0.0;
    }
    Book(string title, string author, int pages, double price)
    {
        this->title = title;
        this->author = author;
        this->pages = pages;
        this->price = price;
    }
    void display()
    {
        cout << "\nBook Details ----------" << endl;
        cout << title << endl
             << author << endl
             << pages << endl
             << price << endl;
    }
};
int main()
{
    Book b("demoTitle", "AuthName", 100, 255.5);
    b.display();
}