#include<iostream>

using namespace std;

int swap(int &i,int &j)
{
	int temp;
	temp=i;
	i=j;
	j=temp;
}
int main()
{
	int a=10,b=20;
	cout<<"value before swap"<<endl;
	cout<<a<<b<<endl;
	swap(a,b);
	cout<<"value after swap"<<endl;
	cout<<a<<b<<endl;
}

