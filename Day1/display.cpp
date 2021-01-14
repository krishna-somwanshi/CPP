#include<iostream.h>
using namespace std;

class demo
{
	private:
		int a;
		public:
			void get();
			void show();
};

void demo::get()
{
	cin>>a;
}
void demo::show()
{
	cout<<a;
}

int main()
{
	demo d1;
	d1.get();
	d1.show();
}
