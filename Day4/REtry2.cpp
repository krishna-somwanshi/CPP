#include<iostream>

using namespace std;

class demo
{
	int a;
	
	public:
		void get()
		{
			cout<<"enter a no.";
			cin>>a;
		}
		
		void show() const
		{
			cout<<a;
			// a=20;   we can not assign value to a here. cause it is read only variable.
		}
};

int main()
{
	demo d1;
	d1.get();
	d1.show();
	return 0;
}
