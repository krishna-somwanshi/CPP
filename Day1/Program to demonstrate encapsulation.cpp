#include<iostream>
using namespace std;

class student
{
	int roll;
	char grade;
	float per;

public:
	void get();
	void show();
};

void student::get()
{
	cout<<"enter student roll,grade,ptr"<<endl;
	cin>>roll>>grade>>per;
}

void student::show()
{
	cout<<"student details"<<endl;
	cout<<roll<<endl<<grade<<endl<<per;
}

int main()
{
	student s1;
	s1.get();
	s1.show();

student s2;
s2.get();
s2.show();
	
	return 0;
}

