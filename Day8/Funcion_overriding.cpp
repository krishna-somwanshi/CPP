#include<iostream>
using namespace std;
class base
{
	int a;
	public:
		void get()
		{
			cout<<"baseenter an value"<<endl;
			cin>>a;
		}

		void show()
		{
			cout<<a<<endl;
		}
};
class drv:public base
{
	int b;
	public:
		void set()
		{
			cout<<"drventer an value"<<endl;
			cin>>b;
		}
		void show()
		{
			cout<<b<<endl;
		}
};
int  main()
{
	drv d1;
	d1.set();
	d1.show();
	base b1;
	b1.get();
	b1.show();
	return 0;
}



