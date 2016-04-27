/*Show the concept of Template using swap funciton
Author-k112257-M.Rafay Farooq*/
#include<iostream>
#include<conio.h>
using namespace std;
template <class Swap>
class swa
{
	int a;
	int b;
	public:
		swa(){
		}
		
		
		void print()
		{
			cout<<"A "<<a<<"B "<<b;
		}
		void swapping(Swap a,Swap b)
		{
			int temp;
			temp=a;
			a=b;
			b=temp;
		}
};
int main()
{
	swa object;
	swa object.swapping(3.5,6.3);
	getch();
}
