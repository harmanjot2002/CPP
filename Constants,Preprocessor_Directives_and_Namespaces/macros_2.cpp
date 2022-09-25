# include<iostream>
using namespace std;

#define maxi(x,y) (x>y?x:y)
#define msg(x) #x
#define pI 3.1425
#define pI 3
#ifndef pI
      #define pI 3
#endif

int main()
{
	cout<<pI;
	cout<<maxi(10,12)<<endl;
	cout<<msg(hello)<<endl;
}