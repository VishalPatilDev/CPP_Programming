#include "Student.h"
#include "Date.h"
int main() {
	Date d(1, 2, 2025);
	Student s("vishal", 90, d);

	s.display();

}