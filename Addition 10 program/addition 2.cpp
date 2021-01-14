#include<iostream>
using namespace std;

class addition
{
	private:
	int a,b,c;
	public:
	void add();
};

void addition::add()
{
	cin>>a>>b;
	c=a+b;
	cout<<"addition is";	
	cout<<c;
}

int main()
{
	addition a1;
	a1.add();

return 0;
}
