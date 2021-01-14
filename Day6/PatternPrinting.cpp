#include<iostream>

using namespace std;

int main()
	{	
		int i,j,row;
			
		cout<<"enter the row";
		cin>>row;
		
		for(i=1;i<=row;i++)
		{
			for(j=1;j<=i;j++)
			{
				if(i==j)
				{
					cout<<i;
					cout<<" ";
				}
				else
				{
					cout<<j;
					cout<<"*";
				}
			}	
			cout<<endl;
		}	
	}
