/*Author:k112257:M.Rafay Farooq
Program Mechanism :constructor and destructor calling*/
#include <iostream>
#include <conio.h>
using namespace std;
class base
{
	protected:
	int a;
	public:
		base()
		{
			a=0;	
		}
		base(int x=0)
		{
			a=x;	
		}
		virtual void print()
		{
			cout<<a<<endl;
		}
		~base();
};
base::~base()
{
	cout<<"Calling destructor of Base Class"<<endl;
}
class derived :public base
{
	int x;
	int y;
	int z;
	public:
	
		derived(int a=0, int b=0, int c=0);
		virtual void print()
		{
		cout<<"X is "<<a<<" Y is "<<y<<" Z is "<<z<<endl; 	
		}
	~derived();
};
derived::~derived()
{
		cout<<"Calling destructor of Derived Class"<<endl;

}
derived::derived(int a, int b, int c):base(b)
		{
		                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
		y=a;
		z=c;	
		}
	void print(derived obj)
	{
		
	obj.print();	
	}	
int main()
{
	
	base obj1(5);
	derived obj2(9,12,15);
	print(obj1);
	cout<<endl;
	print(obj2); 
	obj2.print();
	getch();
}
