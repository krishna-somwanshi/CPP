#include<iostream>

using namespace std;

class counter
{
	int feet;
	int inches;
	
	public:
	
	counter()
	{
		a=0;
	}
	void show()
		{
		cout<<            ;
		}	
		
		operator(int input);
		void operator++();
};
counter::counter(int input)
{
	a=input;
}
void conter::operator++()
{
	++a;
}
void counter::show()
{
	cout<<"a="a;
}
int main()
{
	counter c1(10);
	++c1;
	c1.show();
}
