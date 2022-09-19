#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        int area(){
            return length*breadth;
        }
        int perimeter();
        
        Rectangle(int l,int b);
};

int Rectangle::perimeter(){
    return 2*(length+breadth);
}
Rectangle::Rectangle(int l,int b){
    length=l;
    breadth=b;
}
int main(){
    Rectangle r1(10,5);
    cout<<r1.area()<<endl;
    cout<<r1.perimeter();    
    return 0;
}