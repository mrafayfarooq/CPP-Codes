#include<iostream>
#include<conio.h>
using namespace std;
/* Function to print reverse of the passed string */
void reverse(char *str)
{
   if(*str)
   {
       reverse(str+1);
       cout<<*str;
   }
}
int reversDigits(int num)
{
    int rev_num = 0;
    while(num > 0)
    {
        rev_num = rev_num*10 + num%10;
        num = num/10;
    }
    return rev_num;
}
int powerofNumber(int base, int exp)
{
 if(exp==0)
 return 1;
 else
 return base*powerofNumber(base,exp-1);
}
/* Driver program to test above function */
int main()
{
	   	char a[] = "Rafay";
	   	int i=678839;
	  	cout<<"Reverse of String is"<<endl;
		reverse(a);
	  	cout<<endl;
	   	cout<<"Reverse digit is "<<reversDigits (i);
	   	cout<<endl;
	   	cout<<"Please input the Base"<<endl;
	   	int base=0;
	   	cin>>base;
	   	cout<<"Please input the Exponential part"<<endl;
	   	int exp=0;
	   	cin>>exp;
	   	cout<<"Power of "<<base<<" Exponent "<<exp<<" is "<<powerofNumber(base,exp);
	   	
		getch();
	   
   return 0;
}
