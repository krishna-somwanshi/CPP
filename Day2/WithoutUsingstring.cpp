#include<iostream>
#include<string>


using namespace std;

class demo
{
	int roll;
	char grade;
	float per;
	string name;
	
	public:	
	void get();
	void show();

};

void demo::show()
{
	cout<<roll<<endl<<grade<<endl<<per<<endl<<name;
}

void demo::get()
{
	cout<<"enter the student details";
	cin>>roll>>grade>>per>>name;
}

int main()
{
	demo d1;
	d1.get();
	d1.show();	
	
	return 0;
}
