#include<iostream>
using namespace std;
int main()
{
	int ar[5]={7,0,1,-1,-9};
	int start=0;
	int end=4;
	int mid=(start+end)/2;
	while(start<end)
	{
		if(ar[mid]<ar[mid+1])
		{
			end=mid;
		}
		else
		{
			start=mid+1;
			
		}
		mid=(start+end)/2;
	}
	cout<<start ;
}
