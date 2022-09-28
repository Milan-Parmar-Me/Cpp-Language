#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,2,3,3,3};
	
	int start=0;
	int end=4;
	int p=2;
	int o=0;
	int mid=(start+end)/2;
	while (start<end)
	{
		if(arr[mid]<arr[mid+1])
		{
			start=mid+1;}else
			{
			end=mid-1;	
			}
		mid=(start+end)/2;
	}
	cout<<start;
	
}
