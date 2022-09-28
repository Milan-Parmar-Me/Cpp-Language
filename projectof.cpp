#include<iostream>
#include<string.h>
using namespace std;
class a{
public:

	void  root()
	{
		cout<<"Welcome to Milan Travels\n\n";
		cout<<"1.SG Mandir\n";
		cout<<"Geeta Mandir\n";
		cout<<"Cg Road\n";
		cout<<"Gota Chowkdi\n";
		cout<<"River Front\n";
		bool a;
		
		cout<<"wanna Explore more\n if Yess(1) for no (0)";
		cin>>a;
		if(a==1)
		{
		cout<<"registration\n";
		char name[100];
		int age;
	long int contact;
		char address[200];
		char email[30];
		char username[12];
		char parssword[12];
		cout<<"Name= ";
		cin>>name;
		
		cout<<"age= ";
		cin>>age;
		cout<<"contact number= ";
		cin>>contact;
		cout<<"address=";
		cin>>address;
		cout<<"email= ";
		cin>>email;
		cout<<"username= ";
		cin>>username;
		
		cout<<"passworld= ";
		cin>>parssword;
		cout<<"registration done";
		
		
	
			
	
		
		cout<<"\n\n\nLOGIN\n\n\n";
		char username2[122];
		char parssword2[23];
		cout<<"Enter Usrename;= ";
		cin>>username2;
		cout<<"enter the passworxdl= ";
		cin>>parssword2;
		if(strcmp(username,username2)==0 && strcmp(parsswor
		d,parssword)==0)
		{
			cout<<"login Succesful;";
			
				}		
				else 
				{
					
					cout<<"Enter Valid Input Bhadve;";
				}
			}

	}
};
int main()
{
	a nub;
	nub.root();
	
}
