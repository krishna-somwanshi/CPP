#include<iostream>

using namespace std;

class demo
{
	int a;
	
	public:
		void get()
		{
			cout<<"enter a no.";
			cin>>a;
		}
		
		void show() const
		{
			cout<<a;
			//#include<iostream>

using namespace std;

class Employee
{
	int age;
	string name;
	int id=0;
	int nextid;
	static int count;
	public:
		void get();
		void show();
		Employee();
		~Employee();
}; 

int Employee::count;

void Employee::get()
{
	//static int a;
	//cout<<"Enter EIDOO"<<id<<" employee details"<<endl<<endl;
	cout<<"Enter the age="<<endl;
	cin>>age;
	cout<<"Enter the name="<<endl;
	cin>>name;
	cout<<"Enter employee Id="<<endl;
	cin>>id;
	//a++;
}

void Employee::show()
{
	cout<<"Age is      =   "<<age<<endl;
	cout<<"Name is     =   "<<name<<endl;
	cout<<"Employee Id =   "<<"EID00"<<id<<endl<<endl;
	id++;
	cout<<"Enter EIDOO"<<id<<" employee details"<<endl;
}

Employee::Employee()
{
	cout<<"enter employee details"<<endl;
	Employee::get();
	Employee::show();
	count++;
}

 Employee :: ~Employee()
{
	cout<<"\n Total Employee = "<<count;
	--count;
}

int main()
{
	//cout<<"enter total employee";
	Employee e1;
	Employee e2;
	return 0;
} a=20;   we can not assign value to a here. cause it is read only variable.
		}
};

int main()
{
	demo d1;
	d1.get();
	d1.show();
	return 0;
}

