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
	cout<<"enter the student detail";
	cout<<"Enter the roll number : ";
	cin>>roll;
	cout<<"Enter grade : ";
	cin>>grade;
	cout<<"Enter the percentage: ";
	cin>>per;
	cout<<"Enter your full name: ";
	//cin.ignore();
	getline(cin,name);
	getline(cin,name);
	cout<<"Enter your full name: ";
}

int main()
{
	demo d1;
	d1.get();
	d1.show();	
	
	return 0;
}
