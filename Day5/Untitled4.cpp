#include<iostream>

using namespace std;

class box
{
	int l,b,h;
	
	public:
		box()
		{
			cout<<"enter the value of L B H";
			cin>>l>>b>>h;
		}
		
		box(int i)
		{
			l=b=h=i;
		}
		box(int a,int b,int c)
		{
			this->b=a;
			this->h=b;
			this->l=c;
		}
		
		box(box &p)
		{
			this->b=p.b;
			this->h=p.h;
			this->l=p.l;
		}
	
		void show()
		{
			cout<<l<<endl<<b<<endl<<h<<endl;
		}
	
	};
	
	int main()
	{
		box b1;
		cout<<"B1"<<endl;
		b1.show();
		box b2(20);
		cout<<"B2"<<endl;
		b2.show();
		box b3(30);
		cout<<"B3"<<endl;
		b3.show();
		box b4(b3);
		cout<<"B4"<<endl;
		b4.show();
	
	return 0;
	}
	
