#include<iostream>

using namespace std;

class circle
{
	int r;
	const float pie;
	public:
		circle(int input,float i):pie(i)
	{
		r=input;
	}
	void show()
	{
		cout<<r<<endl<<pie;
	}
	};
	
	int main()
	{
		circle c1(10,3.14);
		c1.show();
	}
