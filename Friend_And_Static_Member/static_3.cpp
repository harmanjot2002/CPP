# include<iostream>
using namespace std;
class Test
{
public:
     int a;
     static int count;
     Test()
     {
	   a=10;
        count++;
     }
     static int getcount()
     {
	   return count;
     }
};
int Test::count=0;
int main()
{
	Test t1,t2;
	cout<<Test::getcount()<<endl;
	cout<<t1.getcount()<<endl;
}