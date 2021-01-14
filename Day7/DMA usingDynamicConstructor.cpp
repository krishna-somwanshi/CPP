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
	};

int main()
{
	int in1;
	string na1;
	float sal1;
	
	cout<<"enter id,name,sal";
	cin>>in1>>na1>>sal1;
	
	emp *p;
	p=new emp(in1,na1,sal1);
	p->show();
	return 0;
}
