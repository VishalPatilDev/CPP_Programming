#include <iostream>
#include <cstring>
using namespace std;

struct Book {
    int id;
    char title[50];
    char author[30];

    // Non-parameterized constructor
    Book() {
        id = 0;
        strcpy(title, "Untitled");
        strcpy(author, "Unknown");
    }

    // Parameterized constructor
    Book(int bookId, const char* bookTitle, const char* bookAuthor) {
        this->id = bookId;
        strcpy(this->title, bookTitle);
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
    Book b1;  // Default constructor
    Book b2(303, "The Great Gatsby", "F. Scott Fitzgerald");  // Parameterized constructor

    cout << "Book ID: " << b1.getId() << ", Title: " << b1.getTitle() << ", Author: " << b1.getAuthor() << endl;
    cout << "Book ID: " << b2.getId() << ", Title: " << b2.getTitle() << ", Author: " << b2.getAuthor() << endl;

    return 0;
}
