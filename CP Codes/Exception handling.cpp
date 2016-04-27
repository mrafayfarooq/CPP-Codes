/*k112257-M.Rafay Farooq
Program Mechanim:Exception HAndling of different types*/
#include<iostream>
#include<conio.h>
#include <string>
#include<cassert>
using namespace std;
string message="Length out of Bound";
string what()
{
	return message;
}
int main()
{
	cout<<"        Dividend Zero Error Exception      "<<endl;
try
{

	int divisor=0;
	int dividend=0;
	cout<<"Enter Divisor"<<endl;
	cin>>divisor;
	cout<<"Enter Dividend"<<endl;
	cin>>dividend;
	if(dividend==0)
	throw dividend;

	cout<<"       Out Of Range Error Exception      "<<endl;
	string test;
	test="This is a Test String for out of Bound Error";
	cout<<endl;
	cout<<"String lenght is "<<test.length()<<endl;
	string sub1;
	sub1=test.substr(0,14);
	cout<<"Sub string one is "<<sub1<<endl;
	string sub2;
	sub2=test.substr(15,29);
	cout<<"Sub string two is "<<sub2<<endl;
	string sub3;
	sub3=test.substr(33,11);
	cout<<"Sub string three is "<<sub3<<endl;
	string sub4;
	sub4=test.substr(89,9);
	if(sub4.length()>test.length())
	throw sub4;
	cout<<"Sub string three is "<<sub4<<endl;
	


}
catch(int x)
{
	cout<<"Infinity"<<endl;
}
catch ( ... )
{
	cout<<what()<<endl;
	
}	
	
getch();	
return 0;
}
