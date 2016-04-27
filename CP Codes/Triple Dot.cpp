#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	private:
		int age;
		string name;
		string status;
		int id;
		char sex;
		char sec;
	public:
		void getData()
		{
		cout<<"Enter Your Name: "<<endl;
		cin>>name;
		cout<<"Enter Your Age: "<<endl;
		cin>>age;
		cout<<"Enter Your id: "<<endl;
		cin>>id;
		cout<<"Enter Your sex: "<<endl;
		cin>>sex;
		cout<<"Enter Your section "<<endl;
		cin>>sec;
		}
		void printData()
		{
		cout<<"Your Name is: "<<endl;
		cout<<name<<endl;
		cout<<"Your Age is: "<<endl;
		cout<<age<<endl;
		cout<<"Your id is: "<<endl;
		cout<<id<<endl;
		cout<<"Your sex is: "<<endl;
		cout<<sex<<endl;
		cout<<"Your section is:"<<endl;
		cout<<sec<<endl;
		}
};
class Under:public student 
{	
	public:
	string FYP;
	student obj;
	void FinalYearProject()
	{
		cout<<"Enter Your Final Year Project Title "<<endl;
		cin>>FYP;
	}
	void print()
			{
				cout<<"Your Final Year Project Title is "<<FYP<<endl;
			}
	
};
class Post:public Under
{
	public:
	Under user;
	string thesis;
	void Thesis()
		{
			cout<<"Enter Your Thesis Title "<<endl;
			cin>>thesis;
			}
			void print()
			{
				cout<<"Your Thesis Title is "<<thesis<<endl;
			}
};
int main()
{


	Post user2;
	user2.user.print();//triple dot inheritence
	
	
	getch();
}
	
	
	
	
	
