#include<iostream>

using namespace std;

class num
{
	protected:
		int a,b;
		public:
			void get()
			{
				cout<<"enter the values"<<endl;
				cin>>a>>b;
			}			
			void show()
			{
				cout<<"numbers are=";
				cout<<a<<"   "<<b<<endl;
			}
};

class Addnum:private num
{
	protected:
		int c;
		public:
			void set()
			{
				get();
			}
			void add()
			{
				c=a+b;
			}
			void display()
			{
				show();
				cout<<"sum is = "<<c;
			}
};

int main()
{
	Addnum obj1;
	obj1.set();
	obj1.add();
	obj1.display();
	
	return 0;
}
