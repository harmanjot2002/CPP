#include <bits/stdc++.h>
using namespace std;

class Test{
    private:
        int a;

    protected:
        int b;

    public:
        int c;
    friend void fun();
};

void fun()
{
    Test t;
    t.a=15;
    t.b=10;
    t.c = 5;
}

int main()
{
    return 0;
}