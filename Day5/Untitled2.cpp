#include<iostream>

using namespace std;

class box
{
	int l,b,h;
	
	public:
	friend	void get(box &);
		int comapre(box &p)
		{
			int user1,user2;
			user1=l*b*h;
			user2=p.b*p.h*p.l;
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

	void get(box &s)
		{
			cout<<"enter the values";
			cin>>s.l>>s.b>>s.h;
		}
	
	int main()
	{
		box b1,b2;
		get(b1);
		get(b2);
		int r=b1.comapre(b2);
		if(r==0)
		{
			cout<<"box is same";
		}
		else
		{
			cout<<"box are not same";
		}
		
		return 0;
	}
