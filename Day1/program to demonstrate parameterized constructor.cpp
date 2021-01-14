#include<iostream>
using namespace std;

class demo
{
	int a;
	public:
		demo (int);
		void show();
};

void demo::show()
{
	cout<<a;
}

demo::demo(int i)
{
	a=i;
}

int main()
{
	demo d1(564);
	d1.show();

return 0;
}

