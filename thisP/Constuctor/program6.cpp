#include <iostream>
#include <cstring>
using namespace std;

struct Movie {
    int movieId;
    char title[50];
    double rating;

    // Non-parameterized constructor
    Movie() {
        movieId = 0;
        strcpy(title, "Untitled");
        rating = 0.0;
    }

    // Parameterized constructor
    Movie(int id, const char* t, double r) {
        this->movieId = id;
        strcpy(this->title, t);
        this->rating = r;
    }

    int getMovieId() {
        return this->movieId;
    }

    const char* getTitle() {
        return this->title;
    }

    double getRating() {
        return this->rating;
    }
};

int main() {
    Movie m1;  // Default constructor
    Movie m2(1, "Inception", 8.8);  // Parameterized constructor

    cout << "Movie ID: " << m1.getMovieId() << ", Title: " << m1.getTitle() << ", Rating: " << m1.getRating() << endl;
    cout << "Movie ID: " << m2.getMovieId() << ", Title: " << m2.getTitle() << ", Rating: " << m2.getRating() << endl;

    return 0;
}
