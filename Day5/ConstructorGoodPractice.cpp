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
	demo (int i)
	{
		a=i;
	}
	demo(int i,int b)
	{
		a= i+b;
	}
	void show()
	{
		cout<<a<<endl;
	}
	
	~demo()
	{
		cout<<"calling destructor"<<endl;
	}
};
	
	int main()
	{
		demo d1(10);
		d1.show();
		demo d2(10,20);
		d2.show();
		int user_input1;
		cout<<"enter an integer";
		cin>>user_input1;
		demo d3(user_input1);
		d3.show();
		return 0;
	}
