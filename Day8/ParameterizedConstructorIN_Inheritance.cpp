#include<iostream>

using namespace std;

class base
{
	protected:
		int a,b;
		public:
			base(int i,int j)
			{
				a=i;
				b=j;
			}
			void show()
			{
				cout<<"a= "<<a<<"b= "<<b;
			}
};

class drv:public base
{
	int c;
	public:
	drv():base(10,20)
	{
		c=a+b;
	}
	void show()
	{
		base::show();
		cout<<"c= "<<c<<endl;
	}
};

int main()
{
	drv obj;
	drv obj2;
	obj.show();
	obj2.show();
	return 0;
}
