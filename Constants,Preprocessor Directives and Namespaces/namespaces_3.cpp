# include<iostream>
using namespace std;

namespace first
{
	void fun()
	{
		cout<<"first"<<endl;
	}
};
namespace second
{
	void fun()
	{
		cout<<"second"<<endl;
	}
};
using namespace first;
int main()
{
    fun();
	second::fun();
	std::cout<<"kkk"<<endl;
}