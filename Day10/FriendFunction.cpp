#include<iostream>
#include<string>


using namespace std;

class student
{
	int roll;
	string name;	
	public:	
		void get()
		{
			cout<<"enter the roll and name";
			cin>>roll;
			cin.ignore();
			getline(cin,name);
		}
		
		friend void show(student &);
};

void show(student &s)
{
	cout<<s.roll<<endl<<s.name<<endl;
}

int main()
{
	student s1;
	s1.get();
	show(s1);
	
	return 0;
}
