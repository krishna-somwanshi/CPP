#include<iostream>


using namespace std;

class box
{
	int l,b,h;
	public:
		box()
		{
			cout<<"enter the values of l,b,h";
			cin>>l>>b>>h;
		}
	
		box(int intput1)
		{
			l=b=h=intput1;
		}

		box(int i,int j,int k)
		{
			l=i;
			b=j;
			h=k;
		}
	
		box(box & p )
		{
			l=p.l;
			b=p.b;
			h=p.h;
		}
		
		void show()
		{
			cout<<" L B H"<<endl;
			cout<<l<<endl<<b<<endl<<h;
		}
};

int main()
{
	box b1;
		cout<<"\n func B1"<<endl;
	b1.show();
	box b2(10);
	cout<<"\n func B2"<<endl;
	b2.show();
	box b3(20);
	cout<<"\n func B3"<<endl;
	b3.show();
	box b4(b3);
	cout<<"\n func B4"<<endl;
	b4.show();
	cout<<"\n func B3"<<endl;
	b3.show();
	
	return 0;
}
