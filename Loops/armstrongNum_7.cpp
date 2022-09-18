#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,r,i,sum=0,count=0;
    cin>>n;
    int m = n;
    while(m>0){
        r=m%10;
        m=m/10;
        count++;
    }
    while (n>0){
        r=n%10;
        n=n/10;
        i=pow(r,count);
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}