#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter no. of elements"<<endl;
    cin>>size;
    int *p=new int[size];
    cout<<sizeof p<<endl;
    cout<<"Enter new size"<<endl;
    cin>>size;
    p=new int[size];
    cout<<sizeof p<<endl;
     
    return 0;
}