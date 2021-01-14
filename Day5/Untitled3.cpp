#include<iostream>


using namespace std;

class demo
{
	int a;
	public:
//		void get();
//		void show();
//};

void get()
{
	cout<<"enter the values";
	cin>>a;
}
void show() const
{
	cout<<a<<endl;
}
};

int main()
{
	demo d1;
	d1.get();
	d1.show();
	return 0;
}
