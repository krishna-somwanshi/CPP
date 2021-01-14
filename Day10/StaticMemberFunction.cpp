#include<iostream>

using namespace std;

class demo
{
	static int a;
	int b;
	public:
		void get()
		{
			cout<<"enter the value";
			cin>>a;
			cin>>b;
		}
		
		static void showA() 
		{
			cout<<a<<endl;
		}
		
		void showB() 
		{
			cout<<b<<endl;
		}
};

		int demo::a;
		
		int main()
		{
			demo d1;
			d1.get();
			d1.showA();
			d1.showB();
			
			return 0;
		}
