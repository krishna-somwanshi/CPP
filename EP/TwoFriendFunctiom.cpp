#include<iostream>

using namespace std;

class beta;
class alpha
{
	int a;
	public:
		void get()
		{
			cout<<"enter the value";
			cin>>a;
		}
	friend compare(alpha,beta);
};

class beta
{
	int b;
	public:
		void get()
		{
			cout<<"enter the value";
			cin>>b;
		
		}
	friend compare(alpha,beta);	
};
 
  int compare(alpha x,beta y)
 {
 	int a=x.a;
 	int b=y.b;
 	//a=x;
 	//b=y;
 	if(a==b)
 	{
 		cout<<"both are same";
	 }
	 else
	 {
	 	cout<<"both are not same";
	 }
	 
 }


int main()
{
	alpha a1;
	a1.get();
	beta b1;
	b1.get();
	compare(a1,b1);
	

	return 0;
}
