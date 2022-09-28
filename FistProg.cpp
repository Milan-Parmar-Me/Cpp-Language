#include<iostream>
using namespace std;
int sub(int a,int b);
int multi(int a,int b);
int div(int a,int b);
int sum(int a,int b);
int main()
{
	cout<<"1 for sub\n";
	cout<<"2 for multi\n";
	cout<<"3 for div\n";
	cout<<"4 for summ\n";
	int a;
	cout<<"enter the your choich\n";
	cin>>a;
	int s,d;
	
	cout<<"Enter the two number\n";
	cin>>s;
	cin>>d;
	if(a==1)
	{
		sub(s,d);
	}
	else if(a==2)
	{
		multi(s,d);
		
	}
	else if(a==3)
	{
		div(s,d);
		
	}
	else if(a==4)
	{
		sum(s,d);
	}
	
	
}
int sub(int a,int b)
{
	cout<<""<<a-b;
}
int multi(int a,int b)
{
	cout<<""<<a*b;
	
}
int div(int a,int b)
{
	cout<<""<<a/b;
}
int sum(int a,int b)
{
	cout<<""<<a+b;
}
