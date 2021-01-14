#include<iostream>

using namespace std;

class base
{
	protected:
		int a;
		public:
			void get()
			{
				cout<<"enter the value";
				cin>>a;
			}
			
			void show()
			{
				cout<<a<<endl;
			}
};

class base2
{
	protected:
		int b;
		public:
			void set()
			{
				cout<<"enter b=";
				cin>>b;
			}
			void display()
			{
				//show();
				cout<<b<<endl;
			}
};

class drv:public base,public base2
{
	int c;
	public:
		void accepet()
		{
			get();
			set();
		}
		void add()
		{
			c=a+b;
		}
		void print()
		{
			show();
			display();
			cout<<"sum ="<<c;
		}
};

int main()
{
	drv obj;
	obj.accepet();
	obj.add();
	obj.print();
}
