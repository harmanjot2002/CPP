#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[10]={13,24,35,46,57,68,79,82,87,99};
    int l=0,h=9,m,key;
    cin>>key;
    while (l<=h){
        m=(l+h)/2;
        if (key==A[m]){
            cout<<"Key found at "<<m;
            return 0;
        }
        else if (key<=A[m]){
            h=m-1;
        }
        else{
            l=m+1;
        }
    }
    cout<<"Match not found";  
    return 0;
}