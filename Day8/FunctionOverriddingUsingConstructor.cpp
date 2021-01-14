#include<iostream>

using namespace std;


class base
{
	int a;
	public:
		void show()
		{
			cout<<a<<endl;
		}
		base()
		{
			cout<<"Enter an value"<<endl;
			cin>>a;					
		}
};
class drv:public base
{
	int b;
	public:
		void show()
		{
			cout<<b<<endl;
		}
		drv()
		{
			cout<<"Enter an value"<<endl;
			cin>>b;
		}
};

	int  main()
	{
		drv d1;
		base b1;
		d1.show();
		b1.show();
		return 0;
	}
