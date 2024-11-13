#include <iostream>
#include <cstring>
using namespace std;

struct Course {
    int courseId;
    char courseName[50];
    int credits;

    // Non-parameterized constructor
    Course() {
        courseId = 0;
        strcpy(courseName, "No Name");
        credits = 0;
    }

    // Parameterized constructor
    Course(int id, const char* name, int c) {
        this->courseId = id;
        strcpy(this->courseName, name);
        this->credits = c;
    }

    int getCourseId() {
        return this->courseId;
    }

    const char* getCourseName() {
        return this->courseName;
    }

    int getCredits() {
        return this->credits;
    }
};

int main() {
    Course c1;  // Default constructor
    Course c2(101, "Introduction to Programming", 3);  // Parameterized constructor

    cout << "Course ID: " << c1.getCourseId() << ", Name: " << c1.getCourseName() << ", Credits: " << c1.getCredits() << endl;
    cout << "Course ID: " << c2.getCourseId() << ", Name: " << c2.getCourseName() << ", Credits: " << c2.getCredits() << endl;

    return 0;
}
