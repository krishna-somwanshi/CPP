#include<iostream>

using namespace std;

class emp
{
	int id;
	string name;
	float sal;
	public:
		void get()
		{
			cout<<"enter the details";
			cin>>id>>sal;
			cin.ignore();
			getline(cin,name);
		}
		void show()
		{
			cout<<id<<endl<<name<<endl<<sal;
		}
};

int main()
{
	emp *p;
	int size;
	cout<<"enter the number of employee";
	cin>>size;
	p=new emp[size];
	//new int[size];	
	for(int i=1;i<size;i++)
	{
		p[i].get();
	}
	for(int j=1;j<size;j++)
	{
		p[j].show();
	}
	return 0;
}
