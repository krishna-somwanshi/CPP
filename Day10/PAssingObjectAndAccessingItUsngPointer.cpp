#include<iostream>

using namespace std;

class box
	{
		int l,b,h;
		public:
			box()
			{
				cout<<"enter the values for l b h";
				cin>>l>>b>>h;
			}
			
			int compare(box *p)
			{
				int a;
				int b;
				a=this->b*this->h*this->l;
				b=p->b*p->h*p->l;
				if(a==b)
				{
					return 0;
				}
				else
				{
					return -1;
				}
			}
};

int main()
{
	box b1,b2;
	int r=b1.compare(&b2);
	if(r==0)
	{
		cout<<"box are same";
	}
	else
	{
		cout<<"box are not same";	
	}
	
	return 0;
}
