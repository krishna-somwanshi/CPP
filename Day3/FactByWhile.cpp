#include<iostream>
using namespace std;

int main()
{
	int a=1,i,n;
	cout<<"enter the number";
	cin>>n;
	
	while(n!=0)
	{
		a=a*n;
		--n;
	}
	cout<<a;
	
	return 0;
}
