#include<iostream>

using namespace std;

class A
{
	int a;
	public:
		void f1()
		{
			cout<<"in f1";
		}
		void f2()
		{
			cout<<a;
		}
};

class B:public A
{
	int b;
	public:
		void f3()
		{
			cout<<"in f3";
		}
		void f2()
		{
			cout<<b;
		}
};


int main()

{
	B obj;
	A *ptr;
	ptr->f1();
	ptr->f2();
	obj.f3();
	obj.f1();
	return 0;
}
