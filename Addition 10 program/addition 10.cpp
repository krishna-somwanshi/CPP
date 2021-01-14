#include<iostream>
using namespace std;

class addition
{
	int a,b;
	public:
		int add(int a,int b);
};

int addition::add(int l,int m)
{
	int f=l+m;
	return f;
}

int main()
{
	addition a1;
	int g,h,j;
	cout<<"enter the number";
	cin>>g>>h;
	j=a1.add(g,h);
	cout<<j;
	return 0;
}
