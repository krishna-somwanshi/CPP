#include<iostream>

using namespace std;

class base
{
	public:
		int a;
};

class drv1: virtual public base
{
	public:
		int b;
};

class drv2: virtual public base
{
	public:
		int c;
};

class drv3:public drv1,public drv2
{
	public:
		int d;
};

int main()
{
	drv3 obj;
	obj.a=10;
	obj.b=20;
	obj.c=30;
	obj.d=40;
	cout<<obj.a<<endl;
	cout<<obj.b<<endl;
	cout<<obj.c<<endl;
	cout<<obj.d<<endl;
	return 0;
}
