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
	void emp::show()
	{
		cout<<id<<endl<<name<<endl<<sal;
	}
	void emp::get()
	{
		cout<<"enter the employee details"<<endl;
		cin>>id>>name>>sal;
	}	
	
int main()
{
	int size;
	cout<<"how many employee you want to enter";
	cin>>size;
	emp *p;
	p=new emp();
	for(int i=0;i<size;i++)
	{
		p->get();
	}
	for(int j=0;j<size;j++)
	{
		p->show();
	}
	return 0;
}
