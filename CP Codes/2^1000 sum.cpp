#include <string>
#include <iostream>
#include<conio.h>
using namespace std;



int  x[302];


int main ()
{
		
		x[301]=2;
		
	for (int power=1;power!=1000;power++)
	{
		for (int arraynum=301;arraynum!=0;arraynum--)
		{
		
			x[arraynum]=x[arraynum] * 2;
			
		}
		
		for (int arraynum=301;arraynum!=0;arraynum--)
		{	
			
			
					if (x[arraynum]>9)
					{
						x[arraynum]=x[arraynum]-10;
						x[arraynum-1]=x[arraynum-1]+1;
						
					}
		}
		
	}

	int sum=0;
	
		for (int arraynum=301;arraynum!=-1;arraynum--)
		{
			sum = sum +x[arraynum];
		}
		cout<<sum;

	getch();
	
	return 0;

}

