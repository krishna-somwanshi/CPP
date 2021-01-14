#include<iostream>


using namespace std;

class box
{
	int l,b,h;
	public:
		box()
		{
			cout<<l<<b<<h;
		}
		box(int input)
		{
			l=b=h=input;
		}
		box(int a,int b,int c)
		{
			l=a;
			b=b;
			h=c;
		}
		box(box &p)
		{
			this->b=p.b;
			this->h=p.h;
			this->l=p.l;
		}
		
		void show();
};

void box::show()
{
	cout<<l<<b<<h;	
}

int main()
{
	box b1(10);
	b1.show();

	return 0;
}
