/*Author:M.Rafay k112257
Program Mechanism: Clear the concept of Contructor Calling*/

#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"A"<<endl;
		}


};
class B:public A
{
	public:
		B()
		{
			cout<<"B"<<endl;
		}


};
class C:public B
{
	public:
		C()
		{
			cout<<"C"<<endl;
		}


};
class D:public C
{
	public:
		D()
		{
			cout<<"D"<<endl;
		}


};
int main()
{
	B obj_1;
	cout<<endl;
	C obj_2;
	cout<<endl;
	D obj_3;
	
	getch();
}

