#include<iostream>
using namespace std;
int FirstOccurance(int arr[],int size,int n)
{
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	int ans=0;
	while(start<=end)
	{
		if(arr[mid]>ans)
		{
			ans=arr[mid];
			end=mid-1;
		}
		else if(n<arr[mid])
		{
			end=mid-1;
		}
		else if(n>arr[mid])
		{
			start=mid+1;
		}
		mid=start+(end-start)/2;
	}
	cout<<ans;
}
int lastOccurance(int arr[],int size,int n)
{
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	int ans=0;
	while(start<=end)
	{
		if(arr[mid]>ans)
		{
			ans=arr[mid];
			start=mid+1;
			
		}
		else if(arr[mid]<n)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	cout<<ans;
}
int main()
{
	int milan[8]={1,2,2,2,2,3,3,3};
	FirstOccurance(milan,8,2);
	lastOccurance(milan,8,2);
	
	

}
