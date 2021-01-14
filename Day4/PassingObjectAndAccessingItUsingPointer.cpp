#include<iostream>

using namespace std;

class box
{
	int l,b,h;
	
	public:
		void get()
		{
			cout<<"enter the values of L B & H"<<endl;
			cin>>l>>b>>h;
		}
		
		int compare(box *p)
		{
			int area_b1;
			int area_b2;
			
			area_b1=l*b*h;
			area_b2=p->b*p->h*p->l;
			
			if(area_b1==area_b2)
			{
				return 0;
			}
			else{
				return -1;
			}
		}
};

int main()
{
	box b1,b2;
	b1.get();
	b2.get();
	
	int r=b1.compare(&b2);
	if(r==0)
	{
		cout<<"both box are equal";
	}
	else
	{
		cout<<"Box are not equal";
	}
	return 0;
}
