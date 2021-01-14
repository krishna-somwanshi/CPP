#include<iostream>

using namespace std;

class beta;
class alpha
{
	int a=20;
	public:
		void show()
		{
			cout<<a;
		}
		friend void compare(alpha,beta);
};

class beta
{
	int b=10;
	public:
		void display()
		{
			cout<<b;
		}
		friend void compare(alpha,beta);
};

	void compare(alpha num,beta num1)
{
	int i=num.a;
	int j=num1.b;
	
	if(i==j)
	{
		cout<<"Alpha and beta are equal";
	}
else
{
	cout<<"Alpha and beta are not equal";
}
}

int main()
{
	alpha num;
	beta num1;
	compare(num,num1);
	
	return 0;
}

