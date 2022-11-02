#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
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
    Rectangle r1;
    r1.setlength(10);
    r1.setbreadth(20);
    cout<<"Area is "<<r1.area()<<endl;
    cout<<"Perimeter is "<<r1.perimeter();


     
    return 0;
}