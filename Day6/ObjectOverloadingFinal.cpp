#include<iostream>

using namespace std;	
	
	class Distance
	{
		int feet;
		int inches;
		
		public:
			Distance()
			{
				cout<<"enter feet and inches";
				cin>>feet>>inches;
			}
			
			void show()
			{
				cout<<"feet"<<feet;
				cout<<"inches="<<inches;
			}
		Distance add(Distance &);
	};
	
	Distance Distance::add(Distance &d)
	{
		Distance temp;
		temp.feet=feet+d.feet;
		temp.inches=inches+d.inches;
		return temp;
	}
	
	int main()
	{
		Distance d1,d2;
		Distance d3=d1.add(d2);
		d3.show();
		
		return 0;
	}
