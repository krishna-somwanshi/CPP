#include<iostream>

using namespace std;

class demo
	{
		int a=10;
		const int b=20;
		public:
			void get()
			{
				cout<<"enter the value of a and b";
				cin>>a;
			}
			void show()
			{
				cout<<endl<<"a="<<a<<endl<<"b="<<b;
			}
		
	};

int main()
{
	demo d1;
	d1.get();
	d1.show();
	return 0;
}
