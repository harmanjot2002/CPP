#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(){
            length=0;
            breadth=0;
        }
        Rectangle(int a,int b){
            setlength(a);
            setbreadth(b);
        }
        Rectangle(Rectangle &r){
            length=r.length;
            breadth=r.breadth;
        }
        void setlength(int l){
            if (l>0)
                length=l;
            else
                length=0;
        }
        void setbreadth(int b){
            if (b>0)
                breadth=b;
            else
                breadth=0;
        }
        int getlength(){
            return length;
        }
        int getbreadth(){
            return breadth;
        }
        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length*breadth);
        }
};

int main(){
    Rectangle r;
    cout<<r.area()<<" Non parameterized constructor called "<<endl;
    Rectangle r2(1,2);
    cout<<r2.area()<<" Parameterized constructor called"<<endl;
    Rectangle r1;
    r1.setlength(10);
    r1.setbreadth(20);
    cout<<"Area is "<<r1.area()<<endl;
    cout<<"Perimeter is "<<r1.perimeter();


     
    return 0;
}