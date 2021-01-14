#include<iostream>
using namespace std;

class demo
{
	int a;
	public:
		demo();
		void show();	
};

void demo::show()
{
	cout<<a;
}
demo::demo()
{
	cout<<"enter the ineteger";
	cin>>a;
}

int main()
{
	demo d1;
	d1.show();
return 0;

}
