#include<iostream>

using namespace std;

class box
{
	int l,b,h;
	public:	
	box()
	{
		cout<<"enter L B H"<<endl;
		cin>>l>>b>>h;
	}
	box(int intput)
	{
		l=b=h=intput;
	}
	box(int i,int j,int k)
	{
		this->l=i;
		this->b=j;
		this->h=k;
	}
	
	box(box &p )
	{
		this->l=p.l;
		this->b=p.b;
		this->h=p.h;
	}
	
	void show()
	{
		cout<<l<<endl<<b<<endl<<h<<endl;
	}
};

int main()
{
	box b1;
	cout<<"\n Show B1"<<endl;
	b1.show();
	box b2(30);
	cout<<"\n Show B2"<<endl;
	b2.show();
	box b3 (10,20,30);
	cout<<"\n Show B3"<<endl;
	b3.show();
	
	box b6(b3);
	cout<<"\n Show B6"<<endl;
	b6.show();
	return 0;
}
