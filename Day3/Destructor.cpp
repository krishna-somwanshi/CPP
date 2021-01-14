#include<iostream>


using namespace std;

class demo
{
	int a;
	public:
		demo()
		{
		cout<<"enter an int";
		cin>>a;	
		}
		void show()
		{
			cout<<a;
		}
		~demo()
		{
			cout<<"\n calling destructor";
		}
};

int main()
{
	demo d1;
	d1.show();	
	return 0;
}
