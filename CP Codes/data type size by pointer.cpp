/*Author:M.Rafay Farooq
Roll No:k112257
Problem:Determine the data type size by pointer */


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout<<"Size of Integer is "<<sizeof(int)<<endl;
	cout<<"Size of Character is "<<sizeof(char)<<endl;
	cout<<"Size of double is "<<sizeof(double)<<endl;
	cout<<"Size of long is "<<sizeof(long)<<endl;
	cout<<"Size of long long is "<<sizeof(long long)<<endl;
	cout<<"Size of double long is "<<sizeof(double long)<<endl;



	int *ptrI=0;
	char *ptrC;
	long *ptrL;
	double *ptrD;
	long long *ptrLL;
	double long *ptrDL;
	cout<<"Size of Integer Pointer is "<<sizeof(ptrI)<<endl;
	cout<<"Size of Character Pointer is "<<sizeof(ptrC)<<endl;
	cout<<"Size of double Pointer is "<<sizeof(ptrD)<<endl;
	cout<<"Size of long Pointer is "<<sizeof(ptrL)<<endl;
	cout<<"Size of long long Pointer is "<<sizeof(ptrLL)<<endl;
	cout<<"Size of double long Pointer is "<<sizeof(ptrDL)<<endl;

	/*Conclusion: Size of all the pointer is same as integer i.e 4
	size of the pointer is always the same,as a pointer is just a
	memory address, and the number of bits needed to access a memory
	 address on a given machine is always constant/*
*/



	getch();
}
