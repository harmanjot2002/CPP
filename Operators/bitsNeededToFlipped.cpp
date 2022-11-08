#include<iostream>
using namespace std;

//Find total no. of bits needed to be flipped to convert x to y.
//This is called Brian Kernighan Algorithm.

int main(){
    int x;
    int y;
    cout<<"Enter two numbers:"<<endl;
    cin>>x;
    cin>>y;
    int w=x^y;
    int count=0;
    while(w!=0){
        w=w & (w-1);
        count++;
    }
    cout<<count;
    return 0;
}