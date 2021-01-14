/*
#include<iostream>

using namespace std;
//#include<stdio.h>

int main()
{
	int arr[]={1,2,3};
	for(int i=0;i<=5;i++)
	{
		cout<<arr[i];
		//arr++;
	}
	return 0;
}
*/

/*
#include<iostream>

using namespace std;

int main()
{
	int arr[]={1,2,3};
	for(int i=0;i<10;i++)
	{
		cout<<arr[i];
	}
};
*/

/*
#include<iostream>

using namespace std;

int main()
{
	int arr[50]={1,2,3};
	for(int i=0;i<3;i++)
	{
		cout<<arr[i];
	}
	
	return 0;
}

*/

#include<iostream>

using namespace std;

int main()
{
	char c='A';
	int *p=&c;
	cout<<c;
	cout<<*p;
	cout<<p;
	return 0;
}
