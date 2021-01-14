#include<iostream>

using namespace std;

class base
{
	public:
	virtual void show()
	{
		cout<<"inside base class"<<endl;	
	}	
};

class drv:public base
{
	public:
		void show()
		{
		cout<<"inside drv class"<<endl;
		}
};

int main()
{
	base *p;   // tried with drv as type
	base b1;
	p=&b1;
	p->show();
	drv d1;
	p=&d1;
	p->show();
	
	return 0;
}
