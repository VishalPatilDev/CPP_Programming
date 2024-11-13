#include <iostream>
#include <cstring>
using namespace std;

struct Course {
    int courseId;
    char courseName[50];
    int credits;

    void setCourseId(int id) {
        this->courseId = id;
    }

    void setCourseName(const char* name) {
        strcpy(this->courseName, name);
    }

    void setCredits(int c) {
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
    Course c1;
    c1.setCourseId(101);
    c1.setCourseName("Introduction to Programming");
    c1.setCredits(3);

    cout << "Course ID: " << c1.getCourseId() << endl;
    cout << "Course Name: " << c1.getCourseName() << endl;
    cout << "Credits: " << c1.getCredits() << endl;

    return 0;
}
