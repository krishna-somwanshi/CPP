#include<iostream>

using namespace std;

class num
{
	protected:
		int a,b;
		public:
			num(int i,int j)
			{
				a=i;
				b=j;
			}
			void show()
			{
				cout<<a<<endl<<b<<endl;
			}
};

class addnum:public num
{
	int c;
	public:
		addnum(int x,int y):num(x,y)
		{
			c=a+b;
		}
		void show()
		{
			num::show();
			cout<<"sum="<<c<<endl<<endl;
		}		
};

class diffnum:public num
{
	int d;
	public:
		diffnum(int i,int j):num(i,j)
		{
			d=a-b;
		}
		void print()
		{
			show();
			cout<<"difference = "<<d<<endl;
		}		
};

int main()
{
	diffnum d1(10,20);
	addnum a1(30,40);
	a1.show();
	d1.print();
	return 0;
}
