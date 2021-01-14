#include<iostream>
using namespace std;

class box
{
	int l,b,h;
	
	public:
	box(int);
	box(int,int);
	box(int,int,int);
	void show();
};

void box::show()
{
	cout<<l<<b<<h<<endl;
}

box::box(int i)
{
	l=b=h=i;
}

box::box(int i,int j)
{
	l=b=i;
	h=j;
}

box::box(int i, int j, int k)
{
	l=i;
	b=j;
	h=k;
}

int main()
{
	box b1(10);
	box b2(10,20);
	box b3(10,20,30);
	b1.show();
	b2.show();
	b3.show();
	
	return 0;
}
