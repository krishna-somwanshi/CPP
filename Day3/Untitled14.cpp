#include<iostream>

using namespace std;

class demo
{
	static int a;
	 int b;
	public:
		void get();
		void show();
};

void demo::get()
{
	cout<<"enter the value";
	cin>>a;
}
void demo::show()
{
	cout<<a<<b;
}

int demo::a;

int main()
{
	demo d1;
	d1.get();
	d1.show();

return 0;
}
