/*Author:k112257:M.Rafay Farooq
Program Mechanism :Convert binary number into decimal*/
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	long number[20];
	int bits;
	int sum=0;
	cout<<"How many bits do you wanted to Enter for Converting"<<endl;
	cin>>bits;
	cout<<"Please Enter a Binary Number with spaces starting with LSB"<<endl;
	for(int i=0; i<bits; i++)
	{
	cin>>number[i];
	}
	/*for(int i=0; i<bits; i++)
	{
	cout<<number[i];
	}*/
	
	for(int i=0;i<bits;i++)
	{
		
	sum+=pow(2,i)*number[i];
		
		}
		cout<<sum;
	getch();	
}
