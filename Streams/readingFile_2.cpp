#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream hh;
    hh.open("Test.txt");
   
    if(hh.is_open()){
        cout<<"File is opened"<<endl;
    }
    string str;
    int x;
    string stri;
    hh>>str>>x>>stri;
    hh.close();
    cout<<str<<" "<<x<<" "<<stri;
    return 0;
}