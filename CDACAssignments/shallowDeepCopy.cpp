#include <iostream>
using namespace std;
class Base
{
    int *ptr;
    int val;

public:
    Base()
    {
        ptr = new int(0);
        val = 0;
    }
    // Deep Copy
    // To avoid dangling pointer
    Base(Base &o)
    {
        ptr = new int;
        *ptr = *o.ptr;
        val = o.val;
    }
    void setPtr(int ptr)
    {
        *this->ptr = ptr;
    }
    void setVal(int val)
    {
        this->val = val;
    }
    int getPtr()
    {
        return *ptr;
    }
    int getValue()
    {
        return val;
    }
    ~Base()
    {
        cout << "Deleting ptr : " << ptr << endl;
        if (ptr != nullptr)
        {
            delete ptr;
            ptr = NULL;
        }
        // cout << "Deleting ptr : " << ptr << endl;
        // delete ptr;
    }
};
int main()
{
    Base b1;
    b1.setPtr(10);
    b1.setVal(20);
    {
        Base b2 = b1;
        b2.setPtr(50);
        cout << "B2 ptr : " << b2.getPtr() << endl;
        cout << "B2 val : " << b2.getValue() << endl;
    }

    cout << "B1 ptr : " << b1.getPtr() << endl; // Dangling Pointer if deep copy is performed
    cout << "B1 val : " << b1.getValue() << endl;
}