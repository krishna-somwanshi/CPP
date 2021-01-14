
#include<iostream>

using namespace std;

class Distance
{
	int feet;
	int inches;
	
	public:
		void get()
		{
			cout<<"enter inches"<<endl;
			cin>>inches;
			cout<<"enter feet"<<endl;
			cin>>feet;
		}
		void show()
		{
			cout<<"inches"<<inches<<endl;
			cout<<"feet"<<feet<<endl;
		}
	Distance add(Distance &);
};

Distance Distance::add(Distance &p)
{
	Distance d1;
	d1.feet=this->feet+p.feet;
	d1.inches=this->inches+p.inches;
	return d1;
}

int main()
{
	Distance s1,s2,s3;
	s1.get();
	s2.get();
	s3=s1.add(s2);
	s3.show();
	return 0;
}
