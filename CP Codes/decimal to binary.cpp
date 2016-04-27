/*Author:k112257:M.Rafay Farooq
Program Mechanism :Convert decimal number into Binary*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	long dec;
	int remainder;
	int remaining[50];
	cout<<"Please Enter a Decimal Number"<<endl;
	cin>>dec;
	remainder=dec;
	int count;
	count=0;
	while(remainder)
	{
	remaining[count]=remainder%2;

	remainder=remainder/2;
	count++;
	}
	for(int j=0;j<count;j++){
		
		cout<<remaining[j];
		}
	
	
	
	
	
	getch();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
