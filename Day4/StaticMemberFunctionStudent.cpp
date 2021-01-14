#include<iostream>


using namespace std;

class student
{
	int roll;
	static int count; 
	
	public:
		
		student(int input)
		{
			roll = input;
			count++;
		}
		void show()
		{
			cout<<"Roll"<<roll<<endl;
		}
		
		void studentCounter()
		{
			cout<<"total student"<<count<<endl;
		}

		~student()
		{
			
			--count;
			cout<<"calling destructor"<<count<<endl;
		}
};

int student::count;

int main()
{
	student s1(1);
	student s2(2);
	student s3(3);
	s1.show();
	s2.show();
	s3.show();
	
	 s3.studentCounter();
	{
		student s4(4);
		student s5(5);
		student s6(10);
		s4.show();
		s5.studentCounter();
	}
	s3.studentCounter();
	return 0;
}
