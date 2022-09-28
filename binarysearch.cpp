#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int num)
{
	int start=0;
	int end=size-1;
	int mid=(start+end)/2;
	while(start<=end)
	{
		if(arr[mid]==num)
		{
			return mid;
		}
		if(num<arr[mid])
		{
			end=mid-1;
			
		}
		else
		{
			start=mid+1;
		}
		mid=(start+end)/2;
	}
	return -1;
}
int main()
{
	int milan[5]={1,2,3,4,5};
	cout<<binarySearch(milan,5,2);
}
