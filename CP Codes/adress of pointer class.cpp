/*Author:k112257:M.Rafay Farooq
Program Mechanism :constructor and destructor calling*/
#include <iostream>
#include <conio.h>
using namespace std;
class Adress
{
	int x;
	public:
		void print()const;
		int& adress();
		void set(int a);
};
void Adress::print()const
{
	cout<<x<<endl;
}
int& Adress::adress()
{
	return x;
}
void Adress::set(int a)
{
	x=a;
}
int main()
{
	Adress obj;
	obj.set(5);
	obj.print();
	int &y=obj.adress();
	y=22;
	obj.print();
	y=55;
	obj.print();
	
	getch();
}

