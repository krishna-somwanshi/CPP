#include<iostream>

using namespace std;

class box
{
	
	int l,b,h;
	
	public:
		void get()
		{
			cout<<"enter the values ofv L B H";
			cin>>l>>b>>h;
		}
		//void show()
		//{
		//	cout<<endl<<l<<endl<<b<<endl<<h;
		//}
		int compare(box &p)
		{
			int user1;
			int user2;
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
