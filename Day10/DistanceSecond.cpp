
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
	friend Distance add(Distance &,Distance &);
};
 Distance add(Distance &p,Distance &q)
{
	Distance temp;
	temp.feet=p.feet+q.feet;
	temp.inches=p.inches+q.inches;
	return temp;
}

int main()
{
	Distance s1,s2,s3;
	s1.get();
	s2.get();
	s3=add(s1,s2);
	//s3.add(s1,s2);
	s3.show();

	return 0;
}
