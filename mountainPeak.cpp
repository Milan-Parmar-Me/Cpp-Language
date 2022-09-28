#include<iostream>
using namespace std;
int mountainPeak(int arr[],int size)
{int m=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]>m)
		{
			m=arr[i];
		}
	}
	cout<<m;
	
}
int main()
{
	int milan[10]={1,2,3,4,5,68,9,5,64,8};
	mountainPeak(milan,10);
	
	
}

