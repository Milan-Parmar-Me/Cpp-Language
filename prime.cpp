#include<iostream>
using namespace std;
int fibOp(int k)
{int a1=0,a2=1;
	cout<<""<<a1;
	cout<<""<<a2;int ne;
	for(int i=2;i<k;i++)
	{
		ne=a1+a2;
		a1=a2;
		a2=ne;
		//cout<<ne;
		
	}
	cout<<ne;
	
	
}
int main()
{
	int a;
	cin>>a;
	fibOp(a);
	
}
