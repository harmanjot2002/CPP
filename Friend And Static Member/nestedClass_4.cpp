#include<bits/stdc++.h>
using namespace std;

class Outer{
    public:
        int a=10;
        static int b;
        void fun(){

        }
        class Inner{
            public:
                int x=25;
                void show(){
                    cout<<b;
                }
        };
        Inner i;
};

int Outer::b=20;

int main(){
    Outer::Inner i;
     
    return 0;
}