// #include <iostream>
// #include <memory>
// using namespace std;
// int main()
// {
//     unique_ptr<int> ptr(new int());
//     *ptr = 10;

//     cout << *ptr << endl;
//     if (ptr)
//     {
//         cout << *ptr << endl;
//     }
// }

#include <iostream>
using namespace std;
int *fun()
{
    int x = 5;
    return &x;
}
int main()
{
    int *res = fun();
}