#include<iostream>
using namespace std;

class demo
{
	int a;
	public:
		void get(int input);
		void show();
};

void demo::show()
{
	cout<<a;
}

void demo::get(int i)
{
	a=i;	
}


int main()
{
	demo d1;
	int input;
	cout<<"enter the number"<<endl;
	cin>>input;
	d1.get(input);
	d1.show();
	
	return 0;
}
