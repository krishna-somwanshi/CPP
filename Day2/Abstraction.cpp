#include<iostream>


using namespace std;

class demo
{
	int a;
	int b;
	public:
	void showA();
	void showB();	
	demo();
};

void demo::showA()
{
	cout<<a<<endl;
}
void demo::showB()
{
	cout<<b<<endl;
}
demo::demo()
{
	cout<<"enter an int"<<endl;
	cin>>a>>b;
}

int main()
{
	demo d1;
	d1.showA();
	demo d2;
	d2.showB();
	demo d3;
	d3.showA();
	d3.showB();
	return 0;
}
