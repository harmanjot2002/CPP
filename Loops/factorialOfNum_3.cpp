#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=1,n,fact=1;
    cin>>n;
    for (i=1;i<=n;i++){
        fact*=i;
    }
    cout<<"factorial of "<<n<<" is "<<fact;
     
    return 0;
}