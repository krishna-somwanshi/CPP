#include<iostream>

using namespace std;

class circle
{
	int r;
	const float pie;
	public:
		circle(int input, float b):pie(b)
		{
			r=input;
		}
	void show()
	{
		cout<<"radious ="<<r<<"pie"<<pie;
	}
};

int main()
{
	circle c1(10,3.14);
	c1.show();
	
	return 0;
}
