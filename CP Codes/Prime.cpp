/*Input the number and output the number which are prime upto input number
Author-k112257-M.Rafay Farooq*/
#include<iostream>
#include<conio.h>
using namespace std;
 
int main()
{
int i,number=1,a=0,k=0;
cin>>a;
while(number<=a)
     {
     i=2;
     while(i<=number)
         {
				
         if(number%i==0)
         break;
         i++;
         }
     if(i==number)
     cout<<number <<"is Prime"<<k++<<endl;
     number++;
     }
     cout<<k;
     
     while(number<=k+a)
     {
     i=2;
     while(i<=number)
         {
				
         if(number%i==0)
         break;
         i++;
         }
     if(i==number)
     number++;
	}
	cout<<k<<" prime is "<<number;
getch();
}
