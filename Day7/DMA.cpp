#include<iostream>
#include<string>

using namespace std;

class emp
{
	int id;
	string name;
	float sal;
	
	public:
		
		void get();
		void show();
};

	void emp::get()
	{
		cout<<"enter the details of employee";
		cin>>id>>name>>sal;
	}
	
	void emp::show()
	{
		cout<<id<<endl<<name<<endl<<sal;
	}
	
	int main()
	{
		emp *p;
		p = new emp();
		p->get();
		p->show();
		//p->show();
	}
