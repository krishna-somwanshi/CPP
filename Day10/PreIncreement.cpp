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
		void operator++();
		void show();
	};
	
	counter::counter(int input)
	{
		this->a=input;
	}
	
	void counter::operator++()
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
	++c1;
	c1.show();
	return 0;
}
