#include<iostream>


using namespace std;

class demo
{
	int a=10;
	const int b=20;
	public:
		void get()
		{
			cout<<"enter value of a::"<<endl;
			cin>>a;
		}
		
		void show()
		{
			cout<<"a="<<a<<endl<<"b="<<b<<endl;
		}
};

int main()
{
	demo d1;
	d1.get();
	d1.show();
	demo d2;
	d2.get();
	d2.show();

	return 0;
};
