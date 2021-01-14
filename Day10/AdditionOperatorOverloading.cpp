#include<iostream>

using namespace std;

class Distance
{
	int feet;
	int inches;
	public:
		void get()
		{
			cout<<"enter the vales";
			cin>>inches>>feet;
		}
//		Distance operator +(int);
	Distance operator +(Distance &p)
	{
		Distance temp;
		temp.feet=this->feet+p.feet;
		temp.inches=this->inches+p.inches;
		return temp;
	}
		void show()
		{
			cout<<inches
			<<endl<<feet<<endl;
		}
};
	int main()
	{
		Distance d1,d2,d3;
		d1.get();
		d2.get();
		d3=d1+d2;
		d3.show();
		return 0;
	}
