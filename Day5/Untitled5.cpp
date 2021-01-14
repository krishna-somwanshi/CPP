#include<iostream>

using namespace std;

class student
{
	int roll;
	static int count;
	public:
		student(int input)
		{
			roll=input;
			count++;
		}
		
		void show()
		{
			cout<<roll<<endl;
		}
		
		void studentcounter()
		{
			cout<<"total student="<<count<<endl;
		}
		~student()
		{
			--count;
		}
};

int student::count;

int main()
{
	student s1(1);
	s1.show();
	student s2(2);
	s2.show();
	student s3(3);
	s3.show();
	s3.studentcounter();
	{
		cout<<"student s4(4);"<<endl;
		student s4(4);
		cout<<"student s5(5);"<<endl;
		student s5(5);
		cout<<"s5.studentcounter();"<<endl;
		s5.studentcounter();
		cout<<"      }         "<<endl;
	}
	s3.studentcounter();
	return 0;
}
