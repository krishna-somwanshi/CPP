#include<iostream>

using namespace std;

class base
{
	public:
		void show()
		{
			cout<<"inside base class";	
		}
};

class drv:public base
{
	public:
		void show()
		{
			cout<<"inside drv class";	
		}
};

int main()
{
	drv *p;
	base b1;
	p=&b1;
	p->show();
	drv d1;
	p=&d1;
	p->show();
	
	return 0;
}
