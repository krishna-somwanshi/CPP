#include<iostream>

using namespace std;

class base
	{
		public:
			void show()
			{
				cout<<"inside basse class";
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
		base *p;
		base b1;
		p=&b1;
		p->show();
		drv d1;
		p=&d1;
		p->show();
		return 0;
	}
