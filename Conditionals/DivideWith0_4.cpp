#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,c;
    cin>>n>>m;
    if (m==0){
        cout<<"Division by 0";
    }
    else{
        c=n/m;
        cout<<c;
    } 
    return 0;
}