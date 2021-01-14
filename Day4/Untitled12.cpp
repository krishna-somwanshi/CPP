#include<iostream>

using namespace std;

class box{
	int l,b,h;
	
	public:
		void get()
		{
			cout<<"enter the values ofv L B H";
			cin>>l>>b>>h;
		}
		void show()
		{
			cout<<endl<<l<<endl<<b<<endl<<h;
		}
};
