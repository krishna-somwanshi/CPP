#include<iostream>

using namespace std;

class demo
{
	int a;
	
	public:
	demo()
	{
		a=0;
	}
	
	demo(int intput)
	{
		a=intput;
	}
	void show()
	{
		cout<<"a ="<<a;
	}
};

int main()
{
	demo d1;
	d1.show();
	int User_intput;
	cin>>User_intput;
	demo d2(User_intput);
	d2.show();
	
	return 0;
}
