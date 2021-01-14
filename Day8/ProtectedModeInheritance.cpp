#include<iostream>

using namespace std;

class num
{
	protected:
	int a,b;
	
	public:
		void get()
		{
			cout<<"enter the values";
			cin>>a>>b;
		}
		
		void show()
		{
			cout<<a<<"   "<<b<<endl;
		}
};

class Addnum : protected num
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
			cout<<"sum="<<c;
		}
};

int main()
{
	Addnum obj;
	obj.set();
	obj.add();
	obj.display();
	
	return 0;
}
