/*Overloading the insertion and exsertion operator
Author-k112257-M.Rafay Farooq*/
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
class print
{
	int length;
	int width;
	
	
	
	public:
	friend	ostream& operator <<(ostream& , print);
	friend	istream& operator >>(istream& , print);
	print()
	{
		length=0;
		width=0;
	}
	print(int x, int y)
	{
	length=x;
	width=y;	
	}
};
int main()
{
	print obj1(5,9);
	print obj2(6,10);
	cout<<endl;
	cout<<obj1<<obj2;
	cin>>obj1>>obj2;
	
	getch();	
}
ostream& operator <<(ostream& out , print square)
{
	out<<square.length;
	cout<<endl;
	out<<square.width;
	cout<<endl;
}
istream& operator >>(istream& in , print square)
{
	in>>square.length;
	cout<<endl;
	in>>square.width;
	cout<<endl;
}

