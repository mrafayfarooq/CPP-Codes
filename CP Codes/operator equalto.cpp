/*Overloading of Equal to operator
Author-k112257-M.Rafay Farooq*/
#include<iostream>
#include<conio.h>
using namespace std;
class eq
{
	int a;
	public:
	
		eq()
		{}
		eq(int z)
		{
			a=z;
		}
friend	bool operator==(eq obj1, eq obj2)//declaring freind function to use two object
	{
		if(obj1.a==obj2.a)
	{
		return true;
	}
	else 
	{
	return false;
	}
	}
		
};
int main()
{
	eq obj1(9);
	eq obj2(0);
	if(obj1==obj2)
	cout<<"They Are Equal"<<endl;
	else
	cout<<"They are not Equal"<<endl;
	getch();
	
}

