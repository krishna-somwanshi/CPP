#include<iostream>

using namespace std;

class demo
{
	int a;
	public:
		demo(int i);
		void show();
};

demo::demo(int i)
{
	cout<<"enter the value for a=";
	a=i;
}

void demo::show()
{
	cout<<a;
}
int main()
{
	demo d1(10);
	d1.show();
	
	return 0;
}
