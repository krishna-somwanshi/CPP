#include<iostream>

using namespace std;

class distance
	{
		int feet;
		int inches;
		public:
			
			distance()
			{
				feet=0;
				inches=0;
			}
			
			void get()
			{
				cout<<"enter the feet and inches";
				cin>>feet>>inches;
			}
			
			void show()
			{
				cout<<feet<<inches;
			}
			
			friend operator +(distance &, distance &);
	};
	
	distance distance operator +(distance &p, distance &q)
	{
		distance temp;
		temp.feet=p.feet+q.feet;
		temp.inches=p.inches+q.inches;
		return temp;
	}
	
	int main()
	{
		distance d1,d2,d3;
		d3=d1(d2);
		d3.show();
		return 0;
	}
