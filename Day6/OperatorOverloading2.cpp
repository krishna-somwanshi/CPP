#include<iostream>

using namespace std;

class Distance
{
	int feet;
	int inche;
	
	public:
	void get()
	{
		cout<<"enter te value of feet and inches";
		cin>>feet>>inche;
	}
	
	void show()
	{
		cout<<feet<<inche;
	}
	
	void add(Distance &,Distance &);
};

void Distance::add(Distance &p,Distance &q)
{
	this->feet=p.feet+q.feet;
	this->inche=p.inche+q.inche;
}

int main()
{
	Distance d1,d2,d3;
	d1.get();
	d2.get();
	d3.add(d1,d2);
	d3.show();
	return 0;
}
