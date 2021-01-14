#include<iostream>

using namespace std;

class demo
	{
	
	static int a;
		int b;	
	
	public:
		static void showA()
		{
			cout<<a;
		}
		static void showB()
		{
			cout<<b;
		}
	};
	
	int demo::a;
	
	int main()
	{
		demo d1;
		d1.showA();
		d1.showB();
		
		return 0;
	}
