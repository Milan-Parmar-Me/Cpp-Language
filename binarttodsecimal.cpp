#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	int i=0;
	while (n>0)
	{
		int f=n&1;
		sum=f*pow(2,i)+sum;
		n=n/10;
		i++;
		
	}
	cout<<sum;
}
