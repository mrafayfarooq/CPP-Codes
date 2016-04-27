/*Author:k112257-M.Rafay Farooq
Program Mechanism: Take a character from user and find that character
in the dictionary and tell that how many time that word occurs*/
#include<iostream>
#include<conio.h>
#include<fstream>
#include<assert.h>
using namespace std;
int main()
{
	char search;
	char find;
	string str;
	int i=0;
	ifstream infile;

	infile.open("Dictionary.txt");
	cout<<"Please Input a word you wanted to search"<<endl;
	cin>>find;

	while(!infile.eof())
	{
		infile>>search;

		if(search==find)
			{
				i++;
			}	
	}
		cout<<endl;
		//Exception Hanling
	try
	{
		if(i!=0)
			{
				cout<<i-1;
			}
		else
			{
				throw 0;
			}
	}
	
	catch(int i)
	{
		cout<<i;
	}
	

getch();
}

