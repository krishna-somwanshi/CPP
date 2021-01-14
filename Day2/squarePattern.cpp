#include<iostream>
using namespace std;

int main()
{
	int b=1,a=4;
	for(int i=0;i<4;i++)
	{
	if(b==1 || b==4)
	{
	cout<<"* * * *"<<endl;
	}
	else if(b==2 || b==3)
	{
		cout<<"*     *"<<endl;
			}
	b++;
	}
return 0;
}

//int main()
//{
//	int b=1,a=4;
//	while(b!=a)
//	{
//		if(a==4)
//		{
//			cout<<"* * * *"<<endl;
//			b++;
//		}
//	}
//return 0;
//}