#include<iostream>

using namespace std;

class box
	{
		int l,b,h;
		
		public:
			void get()
			{
				cout<<"enter the velue for L B H";
				cin>>l>>b>>h;
			}
			
			int compare(box p)
			{
				int user;
				int user1;
				
				user=l*b*h;
				user1=p.h*p.l*p.b;
				
				if(user==user1)
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
		box b1;
		b1.get();
		box b2;
		b2.get();
		int r=b1.compare(b2);
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
	
