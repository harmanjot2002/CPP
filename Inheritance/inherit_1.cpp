# include<iostream>
using namespace std;
class Base
{
public:
	int a;
     	void display()
	{
	 	cout<<"display of Base "<<a<<endl;
	}
};
class Derived:public Base
{
public:
      	void show()
	{
	   	cout<<"show of Derived"<<endl;
	}
};
int main()
{
	Derived d;
	d.a=100;
	d.display();
	d.show();
}