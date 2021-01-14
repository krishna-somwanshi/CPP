#include<iostream>


using namespace std;

void swap(int *p,int *q);

int main()
{
	int a,b;
	cout<<"enter two values"<<endl;
	cin>>a>>b;
	cout<<"velue before swap "<<endl;
	cout<<a<<endl<<b<<endl;
	swap( &a, &b);
	cout<<"value after swap"<<endl;
	cout<<a<<endl<<b<<endl;
	
	return 0; 
}

void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}

