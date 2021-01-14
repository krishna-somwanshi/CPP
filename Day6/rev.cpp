#include<iostream>

#include<string>

using namespace std;

int main()
	{
		string name;
		string reverse;
		cout<<"Enter srting = ";
		cin>>name;
		int len = name.length();
		for(int i=len-1;i>=0;i--)
			{
				reverse=reverse+name[i];
			}
		cout<<"\nREv is:"<<reverse;
		return 0;
	}
