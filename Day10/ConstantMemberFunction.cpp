#include<iostream>

using namespace std;

class demo
	{
		
	int a=10;
	public:
	void get()
	{
		cout<<"enter the value";
		cin>>a;
	}
void show() const
{
	cout<<a;
	//a++;   we can't increment a; 
}
};

int main()
{
	demo d1;
	d1.get();
	d1.show();
	
	return 0;
}
