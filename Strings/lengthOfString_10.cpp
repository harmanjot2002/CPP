#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="WELCOME";
    int i,count=0;
    string::iterator it;
    for (it=str.begin();it!=str.end();it++)  
        {count++;}
    cout<<"Length of string is "<<count;
    return 0;
}