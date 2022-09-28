#include <stdio.h>
#include<math.h>
#include <cstdio>
using namespace std;
int max_of_four(int a,int b,int c,int d)
{int arr[4]={a,b,c,d};
int start=0;
int end=3;
int mid=(start+end)/2;
while(start<end)
{
    if(arr[mid]>arr[mid+1])
    {
        start=mid;
    }
    else  {
        end=mid-1;
    }
    mid=(start+end)/2;
    return start;
    ;}}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    

}
