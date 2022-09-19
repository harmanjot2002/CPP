#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1="Hello";
    cout<<s1.length()<<endl;
     cout<<s1.size()<<endl;
     cout<<s1.capacity()<<endl;
    // s1.resize(90);
    // cout<<s1.length()<<endl;
    //  cout<<s1.size()<<endl;
    //  cout<<s1.capacity()<<endl;
    cout<<s1.max_size()<<endl;
    cout<<s1<<endl;
    s1.clear();
    cout<<s1;
    if (s1.empty()){
        cout<<"s1 is empty"<<endl;
    }
    else{
        cout<<"s1 is non-empty"<<endl;
    }
    return 0;
}