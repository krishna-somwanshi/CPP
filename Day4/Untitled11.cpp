#include<iostream>

using namespace std;

class box
{
	int l,b,h;

public:
	void get()
	{
		cout<<"enter the LBH values";
		cin>>l>>b>>h;
	}
	int compare(box *p)
	{
		int user1;
		int user2;
		
		user1=this->b*this->h*this->l;	
		user2=p->b*p->h*p->l;
		
		if(user1==user2)
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
	b1.get();
	b2.get();
	
	int r=b1.compare( &b2);
	if(r==0)
	{
		cout<<"both box are same";
		}	
		else
		{
			cout<<"box are not same";
		}
		
	return 0;
}
