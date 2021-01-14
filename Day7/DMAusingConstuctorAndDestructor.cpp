#include<iostream>
#include<string>
using namespace std;

	class emp
	{
		int id;
		string name;
		float sal;
		
		public:
			
			emp(int a,string b,float c)
			{
				id=a;
				name=b;
				sal=c;
			}
			
			void show()
			{
				cout<<id<<name<<sal;
			}
			
			emp()
			{
				cout<<"calling Constructor";
			}
			
			~emp()
			{
				cout<<"calling Constructor";
			}
	};

int main()
{
	emp *p;
	p=new emp();
	p->show();
	return 0;
}
