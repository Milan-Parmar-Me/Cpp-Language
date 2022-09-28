#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{int start=0;
		int end=n-1;
	while(start<=end)
	{

		swap(arr[start],arr[end]);
		start++;
		end--;
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
