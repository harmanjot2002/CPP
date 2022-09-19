#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="Holiday";
    string str2=" Game";
    cout<<str.at(4)<<endl;
    cout<<str[4]<<endl;
    cout<<str+str2<<endl;
    str=str2;
    cout<<str<<" "<<str2<<endl;
    str[2]='h';
    cout<<str;
    return 0;
}