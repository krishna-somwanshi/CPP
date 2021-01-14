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
		cout<<"a="<<a<<"  "<<"b="<<b<<endl;
	}		
};

class Addnum:public num
{
	protected:
	int c;
	public:
	void set()
	{
		get();
	}
	
	void display()
	{
		show();
		cout<<"sum ="<<c<<endl;
	}
	
	void add()
	{
		c=a+b;
	}
};

class diffnum:public Addnum
{
	int d;
	public:
		void accept()
		{
			set();
		}
		void diff()
		{
			d=a-b;
		}
		void print()
		{
			display();
			cout<<"Difference = "<<d;
		}	
 };

int main()
{
	diffnum d1;
	d1.accept();
	d1.add();
	d1.diff();
	d1.print();
	return 0;
}
