#include<iostream>

using namespace std;

class demo
{
	static int a;	
	int b;
	public:
		static void showA()
		{
			cout<<"A="<<a<<endl;
		}
	 void showB()
		{
			cout<<"B="<<b<<endl;
		}
};

int demo::a;

int main()
{
	demo ::showA();
	demo d1;
	d1.showB();
	return 0;
}
