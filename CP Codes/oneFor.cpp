#include<iostream>
#include<conio.h>
#include <cstdlib>
 #include<fstream>
using namespace std;
int main()
{
	ofstream infile("for.txt");
system("pause");
for(int j=1;j<=500;j++)
{
	
	cout<<j<<endl;
	infile<<j<<endl;
}
getch();
}
