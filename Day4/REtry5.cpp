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
			cout<<"enter roll grade and percentage"<<endl;
			cin>>roll>>grade>>per;
		}
		
		friend void show (student &); 
};

void show(student &s)
{
	cout<<s.roll<<s.grade<<s.per;
}

int main()
{
	student d1;
	d1.get();
	show(d1);
	
	return 0;
}
