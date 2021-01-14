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
		emp();
		~emp();
};	
	
	void emp::show()
	{
		cout<<id<<endl<<name<<endl<<sal;
	}
	
	void emp::get()
	{
		cout<<"enter the employee details"<<endl;
		cin>>id>>name>>sal;
	}	
	
	emp::emp()
	{
		cout<<"inside constructor"<<endl;
	}
	
	emp::~emp()
	{
		cout<<"inside destructor"<<endl;
	}
int main()
{
	emp *p;
	p=new emp();
	p->get();
	p->show();
	
	return 0;
}


