/*Overloading of Plus operator
Author-k112257-M.Rafay Farooq*/
#include<iostream>
#include<conio.h>
using namespace std;
class overloading
{
	public:
		int add1;
		int add2;
	public:
		overloading()//default constructor
		{
		}
		overloading(int x,int y)
		{
			add1=x;
			add2=y;
		}
		overloading operator+(overloading);
		void print()
		{
			cout<<add1<<" "<<add2;
		}		
};
int main()
{
	overloading obj1(0,6);
	overloading obj2(99,22);
	obj1=obj1+obj2;
	int a=0;
	
	obj1.print();
	getch();
}
overloading overloading::operator+(overloading object)
{
	overloading tempObj;
	tempObj.add1=add1+object.add1;
	tempObj.add2= add2+object.add2;
	return tempObj;
}
