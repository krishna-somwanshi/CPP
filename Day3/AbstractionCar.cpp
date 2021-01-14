#include<iostream>


using namespace std;

class car
{
	int light=4;
	int brak=2;	
	int engine=1;
	int body=15;
	int mileage=12;

	public:
		void showlight();
		void showbrak();
		void showengine();
		void showbody();
		void showmileage();
};

void car::showlight()
{
	cout<<"light is "<<light<<endl;
}

void car::showbrak()
{
	cout<<"break is "<<brak<<endl;
}

void car::showbody()
{
	cout<<"body is "<<body<<endl;	
}

void car::showengine()
{
	cout<<"engine is "<<engine<<endl;
}

void car::showmileage()
{
	cout<<"mileage is "<<mileage<<endl;
}

int main()
{
	car cust;
	cout<<"customer point of view"<<endl;
	cust.showlight();
	cust.showengine();
	cust.showmileage();
	cout<<endl;
	car mech;
	cout<<"Mechanical point of view"<<endl;
	mech.showengine();
	mech.showmileage();

 return 0;
}

