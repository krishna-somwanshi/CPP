#include<iostream>

using namespace std;

class demo
{
	int a,b;
	public:
		demo();
		demo(int);
		void show();
};

demo::demo()
{
	
	cout<<a<<b;
}

demo::demo(int i)
{
	a=b=i;
}
void demo::show()
{
	cout<<a<<endl<<b<<endl;
}

int main()
{
	demo d1;
	d1.show();
	demo d2(20);
	d2.show();
	
	
	return 0;
}
