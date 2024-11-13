#include <iostream>
#include <cstring>
using namespace std;

struct Book {
    int id;
    char title[50];
    char author[30];

    void setId(int bookId) {
        this->id = bookId;
    }

    void setTitle(const char* bookTitle) {
        strcpy(this->title, bookTitle);
    }

    void setAuthor(const char* bookAuthor) {
        strcpy(this->author, bookAuthor);
    }

    int getId() {
        return this->id;
    }

    const char* getTitle() {
        return this->title;
    }

    const char* getAuthor() {
        return this->author;
    }
};

int main() {
    Book b1;
    b1.setId(303);
    b1.setTitle("The Great Gatsby");
    b1.setAuthor("F. Scott Fitzgerald");

    cout << "Book ID: " << b1.getId() << endl;
    cout << "Title: " << b1.getTitle() << endl;
    cout << "Author: " << b1.getAuthor() << endl;
    return 0;
}
