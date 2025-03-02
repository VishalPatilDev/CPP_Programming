
#include "Shape.h"
#include "Circle.h"
class Print {
public:
	static void display(Shape* s) {
		s->calArea();
		if (typeid(*s) == typeid(Circle)) {
			Circle* c=dynamic_cast<Circle*>(s);
			c->calCircumference();
		}
	}

	/*static void display(Shape& s) {
		s.calArea();
		if (typeid(s) == typeid(Circle)) {
			Circle* c = dynamic_cast<Circle*>(s);
			c.calCircumference();
		}
	}*/
};