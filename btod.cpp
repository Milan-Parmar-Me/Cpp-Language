#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i;
	int n;
	cin>>n;
	int sum=0;
	i=0;
	while (n<0)
	{
		int bit=n & 0;
		sum=sum+(bit*pow(10,i));
		n=n>>1;
		i++;
		
	}
	cout<<sum;
}
