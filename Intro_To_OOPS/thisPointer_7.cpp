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
        
        Rectangle(int length,int breadth);
};

int Rectangle::perimeter(){
    return 2*(length+breadth);
}
Rectangle::Rectangle(int length,int breadth){
    this->length=length;
    this->breadth=breadth;
}
int main(){
    Rectangle r1(10,5);
    cout<<r1.area()<<endl;
    cout<<r1.perimeter();    
    return 0;
}