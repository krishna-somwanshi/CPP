#include<iostream>


using namespace std;

class employee
{
	private:
		
	int age;
	int sal;
	int exp;
	int Totalemp;	
	
	public:
		
	void get();
	void show();
	employee();
	~employee();
};

void employee::get()
{
	cout<<"enter the employee details";
	cin>>age>>sal>>exp;
}
void employee::show()
{
	cout<<"employee details"<<endl;
	cout<<"age = "<<age<<endl;
	cout<<"sallery ="<<sal<<endl;
	cout<<"exp = "<<exp<<endl;
}
	employee::employee()
{
	cout<<Totalemp;
}

	employee :: ~employee()
{
	int a,b;
	age=0, exp=10;	
	cout<<endl<<"The value of age and exp will be : "<<exp<<" and "<<age;
	//--Totalemp;
	//cout<<Totalemp;
}

int main()
{
	employee y1;
	//y1 employee();
	y1.get();
	y1.show();
			
	employee y2;
	y2.get();
	y2.show();
}

