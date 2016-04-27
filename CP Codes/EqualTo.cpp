/*Overloading the insertion and exsertion operator
Author-k112257-M.Rafay Farooq*/
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
class EqualTo
{
	int x;
	int y;
	
	
	
	
	
	
	public:
	
	friend bool operator ==(EqualTo, EqualTo);
	EqualTo()
	{
		x=0;
		y=0;
		
	}
	EqualTo(int a, int b)
	{
		x=a;
		y=b;
	}
};
	
int main()
{
 	EqualTo obj1(5,9);
 	EqualTo obj2(5,9);
 	
	 if(obj1==obj2)	
 	{
	cout<<"Two objects are Equal"<<endl;	
	}
	else
	{
	cout<<"Two Objects are NOT equal"<<endl;	
	}
	getch();
}
bool operator==(EqualTo obj1, EqualTo obj2)
{
	if(obj1.x==obj2.x&&obj1.y==obj2.y)
	return true;
	else
	return false;
}
	
	
	

