#include<iostream>

using namespace std;

class student
{
	int roll;
	char grade;
	float per;
	
	public:
		void get()
		{
			cout<<"enter roll grade per";
			cin>>roll>>grade>>per;
		}
		
		friend void show(student &);
};

void show(student &s)
{
cout<<s.roll<<endl<<s.grade<<endl<<s.per;
}

int main()
{
	student s1;
	s1.get();
	show(s1);
	return 0;
}
