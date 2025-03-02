#include <iostream>
using namespace std;
class Point
{
private:
    int x;
    int y;

public:
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void setX(int x)
    {
        this->x = x;
    }
    void setY(int y)
    {
        this->y = y;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    void display()
    {
        cout << "\nPoint Details -------\n";
        cout << x << endl
             << y << endl;
    }
};
int main()
{
    Point p;
    p.setX(10);
    p.setY(20);
    p.display();
    Point p1(35, 34);
    p1.display();
}