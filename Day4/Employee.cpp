#include<iostream>

using namespace std;

class Employee
{
	int age;
	string name;
	static int id;
	//int nextid;
	static int count;
	public:
		void get();
		void show();
		Employee();
		~Employee();
}; 

int Employee::count;
int Employee::id;

void Employee::get()
{
	//static int a;
	//cout<<"Enter EIDOO"<<id<<" employee details"<<endl<<endl;
	
	cout<<"Enter the age=";
	cin>>age;
	cout<<"Enter the name=";
	cin>>name;
	cout<<"Enter employee Id=";
	cin>>id;
	cout<<"\n";
	//a++;
}

void Employee::show()
{
	cout<<"Age is      =   "<<age<<endl;
	cout<<"Name is     =   "<<name<<endl;
	cout<<"Employee Id =   "<<"EID00"<<id<<endl<<endl;
	id++;
	cout<<"Enter the details for EID00"<<id<<endl; //<<" employee details"<<endl;
}

Employee::Employee()
{
	int i,j;
	cout<<"enter total employee";
	cin>>i;
	for(j=1;j<=i;j++)
	{
	Employee::get();
	Employee::show();
	count++;
	}
}

 Employee :: ~Employee()
{
	cout<<"Total Employee"<<count;
	--count;
}

int main()
{
	//cout<<"Welcome to Employee Portal \n \n ";
	cout<<"Enter The Number Of Employee Joined Recently"<<endl;
	Employee e1;
	return 0;
}
