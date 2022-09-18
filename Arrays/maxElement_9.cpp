#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[9]={3,6,7,8,4,90,2,3,6};
    int max=A[0];
    for (int i=0;i<9;i++){
        if (max<A[i]){
            max=A[i];
        }
    }
    cout<<"Value of maximum element in array is :"<<max;
     
    return 0;
}