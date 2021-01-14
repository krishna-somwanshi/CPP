#include<iostream>

using namespace std;

class Distance
	{
		int feet;
		int inches;
		
		public:
			void get()
			{
				cout<<"enter the values";
				cin>>feet>>inches;
			}
			
			void show()
			{
				cout<<feet<<endl<<inches;
			}
			friend Distance add(Distance &,Distance &);
	};
	 	 Distance add(Distance &P,Distance &Q)
	 	 	{
	 	 	Distance temp;
	 	 	temp.feet=P.feet+Q.feet;
	 	 	temp.inches=P.inches+Q.inches;
		  	}	  
	int main()
	  	{
		  	Distance d1,d2,d3;
		  	d1.get();
		  	d2.get();
			d3=add(d1,d2);
			d3.show();	
		  	
			  return 0;
	  	}
