#include<iostream>

using namespace std;

class emp
{
	int id;
	string name;
	float sal;
	
	public:
		void get(int,string,float);
		void show();
		emp();
		~emp();
};

void emp::get(int a,string b,float c)
{
	id=a;
	name=b;
	sal=c;
}

void emp::show()
{
	cout<<id<<endl<<name<<endl<<sal<<endl;
}

emp::emp()
{
	cout<<"calling constructor";
}

emp::~emp()
{
	cout<<"calling destructor";
}
int main()
{
	int x;
	string y;
	float z;
	
	cout<<"enter the id , name , sallery";
	cin>>x>>y>>z; 
	
	emp *p;
	p=new emp();
	p->get(x,y,z);
	p->show();
	delete p;
	return 0;
}
