/*Author:M.Rafay Farooq-k112257
Program Mechanism: Search a particular word from the file and return the
integer times number apppears in the file */
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
	string ch; 
	ifstream infile;
	int j=0;
	int i=0;
	infile.open("numberAndalphabets.txt");

while(!infile.eof())
{

		infile.seekg(i,ios::beg);
		infile>>ch;
	//	cout<<ch;
		i=i+ch.size();

		if(ch=="the")//word to be search
		{
		j++;
		}
}
cout<<"There are "<<j<< " \"the\" in the file"<<endl; 
		
	
	getch();
}
