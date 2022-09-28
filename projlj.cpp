#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
		
		for(int i=0;i<=n/2;i++)
		{for(int j=n;j>=n/2;j--)
		{
			int milan=arr[i];
			arr[i]=arr[j];
			arr[j]=milan;
			
		}
			
		}
	}
int main()
{
	int milan[10]={1,2,3,4,5,6,7,8,9,10};
	reverse(milan,10);
	for(int i=0;i<10;i++)
	{
		cout<<milan[i]; 
	}
	
	
}
