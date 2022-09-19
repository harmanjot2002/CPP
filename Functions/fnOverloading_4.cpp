#include<bits/stdc++.h>
using namespace std;

int addi(int x,int y){
    return x+y;
}
int addi(int x,int y,int z){
    return x+y+z;
}
float addi(float x,float y){
    return x+y;
}

int main(){
    cout<<addi(2,4)<<endl;
    cout<<addi(2,3,0)<<endl;
    cout<<addi(1.4f,8.0f)<<endl;
     
    return 0;
}