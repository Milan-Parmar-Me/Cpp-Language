#include<iostream>
using namespace std;
int main()
{
	int x=1006 ;
	int arr[27];
int start=0;
float end=x;
int mid=start+(end-start)/2;
while (start<=end)
{
	if(mid*mid>x)
	{
		end=mid-1;
		
	}
	else
	{
		start=mid+1;
	}
	mid=(start+end)/2;
}
cout<<end;
float m=end;
while(end<=x)
{
	if(m*m==x)
	{
		cout<<m;
	}
	else
	{
			m=m+0.1;

	}
	
}
}
