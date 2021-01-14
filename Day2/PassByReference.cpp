#include<iostream>


using namespace std;

void swap(int &a,int &b);

int main()
{
	int a=10,b=20;
	cout<<"values before swap"<<endl;
	cout<<a<<endl<<b<<endl;
	swap(a,b);
	cout<<"value after swap"<<endl;
	cout<<a<<endl<<b<<endl;
	return 0;
}

void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
