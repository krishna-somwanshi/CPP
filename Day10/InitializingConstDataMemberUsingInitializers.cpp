#include<iostream>

using namespace std;

class circle
{
	int r;
	const float pie;
	public:
		circle(int input,float j):pie(j)
	{
		r=input;
	}
	void show()
	{
		cout<<r;
		cout<<pie;
	}
		
};

int main()
{
	circle c1(10,3.14);
	c1.show();
	return 0;
}
