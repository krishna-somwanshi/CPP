#include<iostream>

using namespace std;

int main()
{
	int a=10;
	cout<<a<<endl;
	const int *p = & a;
	cout<<&p<<endl;
	//cout<<a++<<endl;
	//cout<<p++<<endl;
	cout<<*(++p)<<endl<<&a<<endl<<a<<endl;	
}
