#include<iostream>

using namespace std;

class demo
{
	int a;
	
	public:
		void get()
		{
			cout<<"enter the value"<<endl;
			cin>>a;
		}
		void show() //const
		{
			cout<<a;
		}
};

int main()
{
	demo d1;
	d1.get();
	d1.show();
	
	
	return 0;
}
