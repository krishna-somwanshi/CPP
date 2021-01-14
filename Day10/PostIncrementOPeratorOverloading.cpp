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
		void show();
		counter operator++(int);
		
};
	void counter::show()
		{
			cout<<a<<endl;
		}
		counter::counter(int input)
		{
			a=input;
		}
	counter counter::operator++(int)
	{
		a++;
	}

int main()
{
	counter c1(10);
	c1++;
	c1.show();
}
