#include<iostream>

using namespace std;

class box
{
	int l,b,h;
	
	public:
	box()
	{
		cout<<"enter the values of l b h";
		cin>>l>>b>>h;
	}
	box(int i)
	{
		l=b=h=i;
	}
	box(int x,int y,int z)
	{
		l=x;
		b=y;
		h=z;
	}
	box(box &p)
	{
		this->l=p.l;
		this->b=p.b;
		this->h=p.h;
	}
	void show()
	{
		cout<<"l = "<<l<<endl<<"b = "<<b<<endl<<"h = "<<endl<<h<<endl;
	}
};

int main()
{
	box b1;
	b1.show();
	box b2(10);
	b2.show();
	box b3(10,55,87);
	b3.show();
	box b4(b3);
	b4.show();
	
	return 0; 
}
