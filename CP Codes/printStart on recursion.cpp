#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
void printStar(int x)
{
	int i=0;
	if(i<x)
	{
		printStar(x-1);
	}
	for(int j=0;j<x;j++)
	{
	cout<<"*";	
	}
	cout<<endl;
}
int main()
{
printStar(7);
getch();
}
