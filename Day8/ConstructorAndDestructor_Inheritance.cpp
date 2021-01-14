#include<iostream>

using namespace std;

 class base
 {
 	public:
 		base()
 		{
 			cout<<"calling base constructor"<<endl;
		}
		~base()
		{
			cout<<"calling base destructor"<<endl;
		}
 };
 
 class drv:public base
 {
 	public:
 		drv()
 		{
 			cout<<"calling drv constructor"<<endl;
		 }
		 ~drv()
		 {
		 	cout<<"calling drv destructor"<<endl;
		 }
 };
 
int  main()
{
	drv obj;	
	
	return 0;
}
