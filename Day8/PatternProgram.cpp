#include<iostream>

using namespace std;
int main()
{	
	int i,j,k;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=2*i+1;k++)
		{
			cout<<i+1;
		}
		cout<<"\n";	
	}
}
