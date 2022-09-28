#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=0;
	int sum=0;
	while(n>0)
	{int p=n%10;
		sum=p+sum*10;
		n=n/10;
	}
	cout<<sum;
}
