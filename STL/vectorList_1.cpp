#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> v = {2, 4, 6, 8, 10};
    v.push_back(20);
    v.push_back(30);
    list<int>::iterator itr;
    cout << "using iterator" << endl;
    for (itr = v.begin(); itr != v.end(); itr++)
        cout << ++*itr << endl;
    cout << "using for each loop" << endl;
    for (int x : v)
        cout << x << endl;
}