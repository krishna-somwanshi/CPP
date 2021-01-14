#include<iostream>
using namespace std;

class cal
{
	int a,b;
	public:
		int sum(int a,int b);
		void show();
};

void cal::show()
{
	cout<<a<<b;
}

int cal::sum(int i, int j)
{
	int num = i+j;
	return num;
}

int main()
{
cal c1;
int res=c1.sum(10,20);
cout<<"sum = "<<res;
return 0;
}
