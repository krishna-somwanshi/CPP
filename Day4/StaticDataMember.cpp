#include<iostream>

using namespace std;

class demo
{
	static int a;
		public:
			void display()
			{
				cout<<a;
			}
};

int demo::a;

int main()
{
	demo d1,d3;
	d1.display();
	d3.display();
		return 0;
}
