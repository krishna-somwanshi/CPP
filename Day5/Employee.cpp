#include<iostream>

using namespace std;

class Employee
{
	int age;
	string name;
	static int id;
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
		cout<<"Enter the name=";
		cin>>name;
		cout<<"Enter the age=";
		cin>>age;
		cout<<"\n";
	}

	void Employee::show()
	{
		cout<<"Name is     =   "<<name<<endl;
		cout<<"Age is      =   "<<age<<endl;
		cout<<"Employee Id =   "<<"EID00"<<id++<<endl<<endl;
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
			cout<<"Total Employee ="<<count;
			--count;
		}

	int main()
	{
		Employee e1;
		return 0;
	}
