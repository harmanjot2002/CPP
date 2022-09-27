#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "constructor of base" << endl;
    }
    ~base()
    {
        cout << "destructor of base" << endl;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << "constructor of derived" << endl;
    }
    ~derived()
    {
        cout << "destructor of derived" << endl;
    }
};
// void fun()
// {
//     base *p = new derived();
//     delete p;
// }
int main()
{
    // fun();
    derived d;
}