#include<iostream>

using namespace std;

class box
{
	int l,b,h;
	public:
		box()
		{
			cout<<"enter the values"<<endl;
			cin>>l>>b>>h;
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
	b1.show();
	box b2(b1);
	b2.show();

return 0;

}
