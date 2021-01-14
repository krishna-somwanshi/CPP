
#include<iostream>


using namespace std;

class demo
{
int a,b,c;

public:
	demo();
	demo(int);
	void show();
};

demo::demo()
{
	cout<<"enter the number";
	cin>>a;
}
void demo::show()
{
	cout<<a;
}
demo::demo(int i)
{
	a=i;	
}

int main()
{
	
	demo d1;
	d1.demo(10);
	return 0;
}
