#include<iostream>

using namespace std;

class myexception //:public exeption
{
	public:
		const char *what() const throw()
		{
			return "Attempted to divide by zero";
		}
};

int main()
{
	try
	{
		int x,y;
		cout<<"enter two number:\n ";
		cin>>x>>y;
		if(y==0)
		{
			myexception z;
			throw z;
		}
		else
		{
			cout<<"x/y"<<x/y<<endl;
		}
	}
	
	catch(exception &e)
	{
		cout<<e.what();
	}
}
