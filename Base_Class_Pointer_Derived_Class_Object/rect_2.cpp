#include <iostream>
using namespace std;
class rectangle
{
public:
    void area()
    {
        cout << "area of rectangle" << endl;
    }
};
class cuboid : public rectangle
{
public:
    void volume()
    {
        cout << "cuboid volume" << endl;
    }
};
int main()
{
    // rectangle r;
    // cuboid *q=&r;
    cuboid c;
    rectangle *q = &c;
    c.area();
    c.volume();
    q->area();
    // q->volume();
    return 0;
}