#include<iostream>

using namespace std;

class base
{
	int x;
	public:
		base(int i)
		{
			x=i;
			cout<<"i= "<<i<<endl;
		}
};
class derived:public base
{
	int y;
	public:
		derived(int j):base(j)
		{
			y=j;
			cout<<"j= "<<j<<endl;
			cout<<"\nderived parameterized constructor";
		}
};

int main()
{	
	derived(10);
	return 0;
}
