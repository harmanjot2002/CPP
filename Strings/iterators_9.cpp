#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="hello";
    int i;
    for (i=0;str[i]!='\0';i++){
        str[i]=str[i]-32;
        cout<<str[i];
    }
    cout<<endl<<str<<endl;
    // cout<<str[i];

    string str2="harman";
    string::reverse_iterator it;
    for (it=str2.rbegin();it!=str2.rend();it++){
        *it=*it-32;
        cout<<*it;
    }
    return 0;
}