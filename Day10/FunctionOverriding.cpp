#include<iostream>

using namespace std;

class base
	{
			int a;
			public:
				base()
				{
					a=10;
				}
				void show()
				{
					cout<<"a="<<a<<endl;
				}
		
	};
class drv:public base
{
	int b;
	public:
				drv()
				{
					b=20;
				}
		void show()
		{
			cout<<"b="<<b<<endl;
		}
};
	int main()
	{
		drv d1;
		d1.show();
		base b1;
		b1.show();
	
		return 0;
	}
