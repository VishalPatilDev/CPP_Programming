#include "A.h"
#include "B.h"
#include "C.h"
int main() {
	C obj;
	//obj.show(); Ambiguous
	obj.A::show();
	obj.B::show();
	//Or define the show method in C class //Method Hiding
}