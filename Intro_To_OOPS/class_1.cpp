#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    public:
        int length;
        int breadth;
        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
    }
};
int main(){
    cout<<"Enter values for length and breadth: ";
    // int length,breadth;
    Rectangle r1;
    cin>>r1.length>>r1.breadth;
    cout<<"Area is "<<r1.area()<<endl;
    cout<<"Perimeter is "<<r1.perimeter();

    return 0;
}