#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[5]={2,4,6,8,10};
    int *p=A,*q=&A[4];
    /*
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p--;
    cout<<*p<<endl;
    p=p+2;
    cout<<*p<<endl;
    p=p-2;
    cout<<*p<<endl;
    */
    
    
    /*
    for (int i=0;i<5;i++){
        cout<<A[i]<<endl;
    }
    */


   /*
   for (int i=0;i<5;i++){
       cout<<i[A]<<endl;
   }
    */


   /*
   for (int i=0;i<5;i++){
       cout<<A+i<<endl;
       cout<<*(A+i)<<endl;
   }
   */

    cout<<q-p<<endl;
    cout<<p-q;
    return 0;
}