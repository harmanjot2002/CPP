#include<bits/stdc++.h>
using namespace std;

int max(int x,int y,int z){
    return x>y && x>z?x:y>z?y:z;
}

int main(){
    cout<<max(3,6,9);
     
    return 0;
}