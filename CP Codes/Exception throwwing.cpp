/*k112257-M.Rafay Farooq
Program Mechanim:Exception HAndling of different types*/
#include<iostream>
#include<conio.h>
#include <string>

using namespace std;
void TFunction()
{
	throw string ("Last Function");
}




void FFunction()
{
	try
	{
	TFunction();	
	}
	catch (...)
	{
		
	throw string ("first");
	}
}

int main()
{
	
	try
	{
	FFunction();
	}
	
	catch(string str)
	{
		cout<<"First Function"<<endl;
	}
	
getch();	
}
