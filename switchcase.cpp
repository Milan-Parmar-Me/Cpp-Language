#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	switch(1)
	{
		case 1: cout<<"total note of hundred "<<n/100; 
		        n=n%100;
		        
		        case 2:cout<<"total number of 50 is "<<n/50;
		        n=n%50;
		        case 3:cout<<"total number of 20 note "<<n/20;
		        n=n%20;
		        case 4:cout<<n/1;
		        
		
	}
}
