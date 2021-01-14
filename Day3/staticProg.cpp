#include<iostream>


using namespace std;

void display();

int main()
{
	cout<<"\n call 1 display"<<endl;
	display();
	cout<<"\n call 2 display"<<endl;
	display();
}

void display()
{
	static int a=10;
	cout<<a;
	a++;
}

