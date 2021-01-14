#include<iostream>
#include<string>

using namespace std;

class box
{
	//private:
	protected:
	int l,b,h;
	public:
		void get()
		{
			cout<<"enter the value";
			cin>>l>>b>>h;
		}
		void show()
		{
			cout<<"L="<<l<<endl<<"B="<<b<<endl<<"H="<<h<<endl;
		}
};
	class cartoon:private box
	{
		string type;
		public:
			
			void set()
			{
				cout<<"enter material name"<<h;
				cin>>type;
			}
			
			void display()
			{
				cout<<type;
			}
};
int main()
{
	cartoon obj;
	//obj.get();
	obj.set();
	//obj.show();
	obj.display();	
	
	return 0;
	
}
