#include<iostream>
#include<string>


using namespace std;

class student
{
	int roll;
	string name;
	public:
		void get();
		void show();
};

	void student::get()
	{
		cout<<"enter the details";
		cin>>roll;
		cin.ignore();
		getline(cin,name);
	}
	
	void student::show()
	{
		cout<<roll<<name;
	}
	
	int main()
	{
		student s1;
		s1.get();
		s1.show();
		
		return 0;
	}
