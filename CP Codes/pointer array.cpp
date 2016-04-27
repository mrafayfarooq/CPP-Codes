/*Author:M.Rafay Farooq
Roll No:k112257
Problem:Dynamic Array */


#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
int *Fptr,*Sptr; //declaring first and second pointer
Fptr=new int[10];
for(int i=0;i<10;i++)
{
	cin>> Fptr[i];
}
Sptr=Fptr; //pointing second pointer to first
cout<<Sptr<<endl;
delete *Sptr;
cout<<Fptr<<endl;
	
	
	
	
	
	
	
	
	
	
	getch();
}
