#include<iostream>

using namespace std;

class counter
{
	int a;
	public:
		counter()
		{
			a=10;
		}
		counter(int input)
		{
			a=input;
		}
	counter operator++();
	void show();
};
counter counter::operator++()
{
	a++;
}

void counter::show()
{
	cout<<a;
}

int main()
{
	counter c1;
	c1.operator++();
	c1.show();
}
