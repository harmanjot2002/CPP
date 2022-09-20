# include<iostream>
using namespace std;
    
/*program for using using access specifiers

*/
class rectangle
{
private:
	int length;
	int breadth;
public:
	void setlength(int l)
	{
		if(l>0)
			length=l;
	        else
		  	length=1;
	}
	void setbreadth( int b)
	{
		if(b>0)
			breadth=b;
		else
			breadth=1;
	}
	int getlength()
	{
		return length;
	}
	int getbreadth()
	{
		return breadth;
	}
	int area()
	{
		return length*breadth;
	}
	int perimeter()
	{
		return 2*(length+breadth);
	}
};
int main()
{
	rectangle r1;
	r1.setlength(10);
	r1.setbreadth(5);
	cout<<r1.area()<<endl;
	cout<<r1.perimeter()<<endl;
	cout<<"length is "<<r1.getlength()<<endl;
	cout<<"breadth is "<<r1.getbreadth()<<endl;
}