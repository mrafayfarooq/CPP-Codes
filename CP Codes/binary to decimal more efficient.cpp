/*Author:k112257:M.Rafay Farooq
Program Mechanism :Convert binary number into decimal more effiecient*/
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	long binary;
	int decimal=0;
	int i=0,remain[10];
	cout<<"Please Input Binary Number"<<endl;
	cin>>binary;
	while(binary!=0)
	{
		remain[i]=binary%10;
		binary=binary/10;
		//cout<<remain[i];
		decimal=decimal+pow(2,i)*remain[i];
		i++;
	}
	cout<<decimal;
	getch();

}

