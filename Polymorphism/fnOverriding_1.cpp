#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
        void display(){
            cout<<"display of base";
        }
};

class Derived:public Base{
    public:
        void display(){
            cout<<"display of derived";
        }
};

int main(){
    Derived d;
    d.display();
    return 0;
}