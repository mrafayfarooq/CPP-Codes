/*Overloading of Less than  operator
Author-k112257-M.Rafay Farooq*/
#include<iostream>
#include<conio.h>
using namespace std;
class les
{
	int a;
	public:
		les()
		{}
		les(int z)
		{
			a=z;
		}
	friend	bool operator<(les &obj1, les &obj2)
	{
			
	if(obj1.a<obj2.a)
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
les obj1(1);
les obj2(5);
	if(obj1<obj2)
	{
		cout<<"Obect one is less than object 2";
	}
		else
		{
			cout<<"Obect one is not less than object 2";
		}
	getch();
}
 

