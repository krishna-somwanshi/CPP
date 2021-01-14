// 

#include<iostream>
using namespace std;

class Demo
{
int a;
public:
	void get(int input);
	void show();
};

void Demo::show()
{
	cout<<a;
}

void Demo::get(int i)
{
	a=i;
}

int main()
{
	Demo d1;
	d1.get(10);
	d1.show();
	
	return 0;
}
