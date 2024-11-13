#include <iostream>
#include <cstring>
using namespace std;

struct Movie {
    int year;
    char title[50];
    char director[30];

    void setYear(int y) {
        this->year = y;
    }

    void setTitle(const char* t) {
        strcpy(this->title, t);
    }

    void setDirector(const char* d) {
        strcpy(this->director, d);
    }

    int getYear() {
        return this->year;
    }

    const char* getTitle() {
        return this->title;
    }

    const char* getDirector() {
        return this->director;
    }
};

int main() {
    Movie m1;
    m1.setYear(1994);
    m1.setTitle("The Shawshank Redemption");
    m1.setDirector("Frank Darabont");

    cout << "Year: " << m1.getYear() << endl;
    cout << "Title: " << m1.getTitle() << endl;
    cout << "Director: " << m1.getDirector() << endl;
    return 0;
}
