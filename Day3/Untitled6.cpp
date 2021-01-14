#include<iostream>

using namespace std;

class cal
{
	int a,b,c;
	public:
		int sum(int i);
		int sum(int f,int h);
};
	int cal::sum(int f,int h)
	{
		return f+h;
	}
	int cal::sum(int i)
	{
		return i;
	}
	int main()
	{
		cal c1;
		cal c2;
		int r=c1.sum(10,20);
		cout<<r<<endl;
		int s=c2.sum(20);
		cout<<s;

		return 0;
	}
