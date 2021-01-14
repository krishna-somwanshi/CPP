#include<iostream>

using namespace std;

class counter
{
	int a;
	public:
		counter()
		{
			a=0;
		}
		counter(int input)
		{
			a=input;
		}
	counter operator+(counter &);
	void show();
	void get()
	{
		cout<<"enter the velue";
		cin>>a;
	}
};
counter counter::operator+(counter &p)
{
	counter temp;
	temp.a=a+p.a;
	return temp;
}

void counter::show()
{
	cout<<a;
}

int main()
{
	counter c1,c2;
	c1.get();
	c2.get();
	c2=c1+c2;
	c2.show();
}
