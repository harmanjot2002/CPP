#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[6],i;
    for (i=0;i<5;i++){
        cin>>A[i];
    }
    A[5]=90;
    for (i=0;i<=5;i++){
        cout<<A[i]<<endl;
    }
    return 0;
}