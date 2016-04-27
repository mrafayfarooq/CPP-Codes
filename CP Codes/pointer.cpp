/*Author:M.Rafay Farooq
Roll No:k112257
Problem:Input Name and age using pointers and print their adress */


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{


string name;//array of name
string *ptrN=NULL;//pointer for name

int age=0; //array of age
int *ptrA=NULL;

ptrN=&name;//refrencing the adress of name to pointer
ptrA=&age;

cout<<"Enter Your Name: "<<endl;
cin>>*ptrN;
cout<<endl;

cout<<"Value of Pointer is "<<*ptrN<<endl;
cout<<"Adress of Pointer is "<<ptrN<<endl;
cout<<"Value of Name is "<<name<<endl;
cout<<"Adress of Name is "<<&name<<endl;

cout<<"Enter Your Age: "<<endl;
cin>>*ptrA;
cout<<endl;

cout<<"Value of Pointer is "<<*ptrA<<endl;
cout<<"Adress of Pointer is "<<ptrA<<endl;
cout<<"Value of age is "<<age<<endl;
cout<<"Adress of age is "<<&age<<endl;



getch();
}

