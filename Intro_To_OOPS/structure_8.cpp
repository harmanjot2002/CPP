#include<bits/stdc++.h>
using namespace std;

struct Demo{
    int x;
    int y;
    void Display(){
        cout<<x<<" "<<y<<endl;
    }
};

int main(){
    Demo d;
    d.x=10;
    d.y=20;
    d.Display();     
    return 0;
}