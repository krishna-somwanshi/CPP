#include<iostream>

using namespace std;

class Distance
{
	int feet;
	int inches;
	
	public:
		
		Distance()
		{
			cout<<"enter the feet and inches";
			cin>>feet>>inches;
		}
		
		void show()
		{
			cout<<feet<<inches;
		}
		
		Distance add(Distance &);
		
};

		Distance add(Distance &d)
		{
			Distance temp;
			temp.feet=feet+d.feet;
			temp.inches=inches+d.inches;
			return temp;
		}

int main()
{
	Distance d1,d2,d3;
	d3=d1 add(d2);
	d1.show();
	d2.show();
	d3.show();
	
	return 0;
}
