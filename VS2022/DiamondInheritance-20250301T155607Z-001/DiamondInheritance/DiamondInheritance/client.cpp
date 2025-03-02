#include "A.h";
#include "B.h";
#include "C.h";
#include "D.h";
int main() {
	C obj;
	cout << obj.x;
	//obj.show(); ambiguous
	obj.A::show();
	obj.B::show();
	
}
