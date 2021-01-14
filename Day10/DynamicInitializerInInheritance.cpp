#include<iostream>

using namespace std;

class base
{
	int x;
	public:
		base(int i)
		{
			x=i;
			cout<<"i"<<x<<endl;
			cout<<"base parameterized constructor"<<endl;
		}
};

class Derived:public base
{
	int y;
	public:
		Derived(int j):base(j)
		{
			y=j;
			cout<<"j="<<j<<endl;
			cout<<"Derived parameterized constructor \n"<<endl;
		}	
};
int main()
{
	Derived d(10);
	return 0;
}
