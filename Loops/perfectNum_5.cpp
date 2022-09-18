#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,sum=0;
    cin>>n;
    for (i=1;i<=n;i++){
        if(n%i==0){
            sum=sum+i;
        }
        // cout<<"sum of all factors of n is "<<sum;
    }
    cout<<sum<<endl;
    if (2*n==sum)
        cout<<"it is a perfect no.";
    
    else{
        cout<<"it is not a perfect no.";
    }
    return 0;
}