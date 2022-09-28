#include<iostream>
#include<math.h>
using namespace std;
int main()

{
	int arr[5]={7,9,5,1,3};
	int n=5;
	for(int i=1;i<n;i++)
	{
		int milan=i;
		for(int j=0;j<n-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}

	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
