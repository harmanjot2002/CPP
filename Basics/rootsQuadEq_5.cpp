#include<iostream>
#include<math.h>
using namespace std;

typedef float roots;
int main(){
    float a,b,c;
    roots r1,r2;
    cout<<"Enter the values of a,b,c"<<endl;
    cin>>a>>b>>c;
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"Roots of this quadratic equation is "<<r1<<" and "<<r2<<endl;
    return 0;
}