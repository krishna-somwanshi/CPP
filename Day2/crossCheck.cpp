#include<iostream>


using namespace std;

void swap (int,int);

int main()
{
	int a=10,b=20,temp;
	cout<<"before the swap"<<endl;
	cout<<a<<b<<endl;
	temp=a;
	a=b;
	b=temp;
//	void swap(int a,int b);
	cout<<"after the swap"<<endl;
	cout<<a<<b;
	return 0;
}
/*
void swap(int i,int j)
	{
		int temp;
		temp=i;
		i=j;
		j=temp;
	}
*/
