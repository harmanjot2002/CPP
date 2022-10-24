#include<bits/stdc++.h>
using namespace std;

typedef int marks;
int main(){
    marks m1,m2;
    cout<<"Enter marks for 2"<<endl;
    cin>>m1>>m2;
    if (m1>m2){
        cout<<"Marks for 1st is greater than 2nd";
    }
    else{
        cout<<"Marks for 2nd is greater than 1st";
    }
    return 0;
}