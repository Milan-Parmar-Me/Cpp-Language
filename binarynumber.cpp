#include<iostream>
using namespace std;
int main()
{
	int milan[10]={1,2,3,4,5,9,3,2,1,0};
	
	int start=0;
	int end=10-1;
	int mid=start+(end-start)/2;
	while(start<=end)
	{
		if(milan[mid]<milan[mid+1])
		{
			start=mid+1;
		}
		else 
		{
			end=mid;
		}
		mid=start+(end-start)/2;
	}
	cout<<start;
}
