#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,r,i=0;
    cin>>n;
    while (n>0){
        r=n%10;
        n=n/10;
        i=(i*10)+r;
    }
    cout<<i;
    return 0;
}