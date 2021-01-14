#include<iostream>

using namespace std;

class demo{
	int a;
	int *p;
	public:
		demo()
		{
			p=new int();
		}
		void get()
		{
			cout<<"enter two numbers";
			cin>>a>>*p;
		}
		void show()
		{
			cout<<"a= "<<a<<endl;
			cout<<"*p= "<<*p<<endl;
		}
		
		void update(int temp)
		{
			*p=temp;
		}
};

int main()
{
	demo d1;
	d1.get();
	demo d2;
	d2.get();
	cout<<"D1 Show "<<endl;
	d1.show();
	cout<<"D2 Show "<<endl;
	d2.show();
	d2.update(99);
	cout<<"D2 Updated Show "<<endl;
	d2.show();
	
	return 0;
}
