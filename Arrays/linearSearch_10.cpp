#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[10]={15,26,59,72,95,23,56,89,54,87};
    int key;
    int i;
    bool flag=false;
    cin>>key;
    for(i=0;i<10;i++){
        if (A[i]==key){
            flag=true;
            break;
    }
    }
    if (flag==true){
        cout<<"Match found at "<<i;
    }
    else{
        cout<<"Match not found";
    }
    return 0;
}
