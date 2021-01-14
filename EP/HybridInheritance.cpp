#include<iostream>

using namespace std;

class base1
{
	public:
		int a;
};
class drv1:virtual public base1
{
	public:
		int b;
};
class drv2:virtual public base1
{
	public:
		int c;
};

class drv3:public drv1, public drv2
{
	public:
		int d;
};

int main()
{
	drv3 obj;
	obj.a=10;
	obj.c=20;
	obj.d=30;
	
	cout<<obj.a;
	cout<<obj.c;
	cout<<obj.d;
	return 0;
}
