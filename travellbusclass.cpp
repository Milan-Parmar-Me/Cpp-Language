#include<iostream>
#include<string.h>
using namespace std;
class a{
	public:
	void displayA()
	{
		cout<<"SG Road";
		cout<<"Cg Highway";
		cout<<"jola pur";
		cout<<"milan nagar";
		
	}
};
class b:public a
{
	public:
		char name[123],papaname[34];
		int birthdate;int password; 
	void displayB()
	{
		cin>>name;
		cin>>papaname;
		cin>>birthdate;
		cin>>password;
	}
	
};
class c:public b

{public:
	char username[40];int password;
	void displayC()
	{
		cin>>username;
		cin>>password;
		if(strcmp(name,username)==0)
		
		{
			cout<<"login succesfull";
		}
	}
	
	
	
};
int main()
{
	c milan;
	milan.displayA();
	milan.displayB();
	milan.displayC();}
