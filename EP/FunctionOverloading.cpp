#include<iostream>

using namespace std;

class base
{
	int a=10;
	public:
		void show()
		{
			cout<<a<<endl;
		}
};
class drv:public base
{
	int b=20;
	public:
		void show()
		{
			cout<<b<<endl;
		}
};

int main()
{
	base b1;
	b1.show();
	drv d1;
	d1.show();
	
	return 0;
}
