#include<iostream>


using namespace std;

class cal
{
	int a,b,c;
	public:
		void sum(int,int);
		void sum(int,int,int);
};

void cal::sum(int i,int j)
{
	//int z=i+j;
	//cout<<z;
	return i+j;
}

void cal::sum(int p,int q,int r)
{
	//int x=p+q+r;
	//cout<<"\n"<< x;
	return p+q+r;
}

int main()
{
	cal c1;
	int s=c1.sum(10,20);
	int s1=c1.sum(10,20,30);
	cout<<s<<endl<<s1;
	return 0;
}
