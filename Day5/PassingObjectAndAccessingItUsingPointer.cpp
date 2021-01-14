#include<iostream>


using namespace std;

class box{
	int l,b,h;
	public:
		void get()
		{
			cout<<"enter values of L B H";
			cin>>l>>b>>h;
		}
		int compare(box *p)
		{
			int User_input1;
			int User_input2;
			
			User_input1=l*b*h;
			User_input2=p->l*p->b*p->h;
			
			if(User_input1==User_input2)
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
		int r=b1.compare(&b2);
		if(r==0)
			{
				cout<<"box are same";
			}
		else
			{
				cout<<"Box are not same";
			}			
		
		return 0;	
	}
