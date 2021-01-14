#include<iostream>

using namespace std;

class student{
	int roll_no;
	string name;
	int age;
	
	public:
		
		void setroll_no()
		{
			cout<<"enter the roll number";
			cin>>roll_no;
		}
		void setname()
		{
			cout<<"enter the name";
			cin.ignore();
			getline(cin,name);
		}
		void setage()
		{
			cout<<"enter the age";
			cin>>age;
		}
		int getage() const
		{
			return age;
		}
		string getname() const
		{
			return name;
		}
		int getroll_no() const
		{
			return roll_no;
		}
		
		student()
		{
			roll_no=0;
			name="";
			age=0;
		}
};
int main()
{
	student s1;
	s1.setroll_no();
	s1.setage();
	s1.setname();
	int a=s1.getroll_no();
	int b=s1.getage();
	string c=s1.getname();
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	return 0;
}
