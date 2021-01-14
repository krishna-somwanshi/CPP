#include<iostream>

using namespace std;

class fact
{
	int a,i,n,facto=1;
	public:
		void display();
		void get(); 
};
void fact::get()
{
	cout<<"enter the number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		facto=facto*i;
	}
}

void fact::display()
{
	cout<<facto;
}

int main()
{
	fact f1;
	f1.get();
	f1.display();
return 0;
}

