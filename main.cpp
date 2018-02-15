//Authors: Abdulla Aldhaheri
#include<iostream>
#include<string>

using namespace std;

int main()
{
	//declare variables
	string firstname;
	string lastname;

	//get user input
	cout<<"What is your first name?\n";
	cin>>firstname;

	cout<<"What is your last name?\n";
	cin>>lastname;

	//tell fortune
	cout<<"Welcome, "<<firstname[0]<<"."<<lastname[0]<<"., here is your fortune...";
	cout<<"\n";

	//predict the user's lucky number
	int lucky;
	lucky = firstname.length();

	cout<<"your lucky number is "<<lucky<<endl;

	if(firstname[0]=='a'||firstname[0]=='e'||firstname[0]=='i'||firstname[0]=='o'||firstname[0]=='u'||firstname[0]=='A'||firstname[0]=='E'||firstname[0]=='I'||firstname[0]=='O'||firstname[0]=='U')
	{
		cout<<"you are destined to be famous!\n";
	}
	else if(firstname[0]>65 && firstname[0]<90 || firstname[0]>97 && firstname[0]<122)
	{
		cout<<"you should keep a low profile.\n";
	}

	int len= lastname.length();
	if(lastname[len -1]=='a'||lastname[len -1]=='e'||lastname[len -1]=='i'||lastname[len -1]=='o'||lastname[len -1]=='u')
	{
		cout<<"you have already met your true love.\n";
		cout<<"have a good day!\n";
	}
	else
	{
		cout<<"have a good day!\n";
	}

  return 0;
}
