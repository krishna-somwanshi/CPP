#include<iostream>

using namespace std;

class circle
{
	int r;
	const float pie;
	public:
		
	circle(int intput, float b):pie(b)
	{
		r=intput;		
	}
	void show()
	{
		cout<<"radious = "<<r<<endl<<"pie = "<<pie<<endl;
	}
};

int main()
{
	circle c1(10,3.14);
	c1.show();

return 0;
}
