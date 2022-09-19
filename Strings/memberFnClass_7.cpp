#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="Hello ";
    string s2="Hi";
    char s3[10];
    s.append("Bye");
    cout<<s<<endl;
     
     s.insert(3,"kkig",2);
     cout<<s<<endl;

    s.replace(3,2,"");
    cout<<s<<endl;

    s.push_back('z');
    cout<<s<<endl;

    s.pop_back();
    cout<<s<<endl;

    s.swap(s2);
    cout<<s<<" "<<s2<<endl;

    s.copy(s3,2);
    s3[2]='\0';
    cout<<s3<<endl;

    cout<<s2<<endl;
    cout<<s2.find("el")<<endl;
    cout<<s2.find('l')<<endl;
    cout<<s2.rfind('l')<<endl;
    cout<<s2.find_first_of("l")<<endl;
    cout<<s2.find_last_of("ll")<<endl;
    cout<<s2.substr(2,5);
    
    return 0;
}