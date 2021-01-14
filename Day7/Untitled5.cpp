#include<iostream>

using namespace std;

class Distance
{
	int feet;
	int inches;
	public:
		void get()
		{
			cout<<"enter the values of feet and inches";
			cin>>feet>>inches;
		}
		void show()
		{
			cout<<feet<<endl<<inches;
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
			Distance d1,d2,d3;
			d1.get();
			d2.get();
			//d1.show();
			d3=add(d1,d2);
			d3.show();
			return 0;
		}
