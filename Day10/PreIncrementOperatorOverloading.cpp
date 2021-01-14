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
	counter(int input);
	void operator ++();
	void show();
};
	counter::counter(int input)
	{
		a=input;
	}
	
	void counter::operator ++()
	{
		++a;
	}
	
	void counter::show()
	{
		cout<<"a = "<<a;
	}

int main()
{
	counter c1(10);
	c1.operator ++();
	c1.show();
	
	return 0;
}
