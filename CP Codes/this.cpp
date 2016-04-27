/*Program Mechanis: illustrating THIS pointer
Author:K112257-M.Rafay Farooq*/
#include<iostream>
#include<conio.h>
using namespace std;
class Calculate
{
	private:
		int x;
		int y;
		int add;
		int sub;
		int mul;
		int div;
	public:
		Calculate ()
		{
			x=0;
			y=0;
		
		
		}
		Calculate& Add(int a,int b)
		{
			x=a;
			y=b;
			add=x+y;
			return *this;
		}
		Calculate& Sub(int a,int b)
		{
			x=a;
			y=b;
			sub=x-y;
			return *this;
		}
		Calculate& Mul(int a,int b)
		{
			x=a;
			y=b;
			
			mul=x*y;
			return *this;
		}
		Calculate& Div(int a,int b)
		{
			x=a;
			y=b;
			div=x/y;
			
			return *this;
		}
		void print()
		{
			cout<<"Add="<<add<<endl;
			cout<<"Sub="<<sub<<endl;
			cout<<"Mul="<<mul<<endl;
			cout<<"Div="<<div<<endl;	
		}
		
};
int main()
{
	Calculate cal;
	int x=0;
	cal.Add(6,8).Sub(3,9).Div(8,4).Mul(3,6);
	cal.print();
	getch();
}
