# include<iostream>
using namespace std;
class myexception1: exception
{
};
class myexception2:public myexception1
{
};

int main()
{
	try
	{
		throw myexception1();
	}
	catch(myexception2 e)
	{
		cout<<"int catch"<<endl;
	}
	catch(myexception1 e)
	{
		cout<<"double catch"<<endl;
	}
	catch(...)
	{
		cout<<"all catch"<<endl;
	}
}