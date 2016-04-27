/*Author :M. Rafay 11-2257
Program Mechanism: Show the Inheritance between base and derived class*/
/*Error while compiling:
	1)cant initialze the string in contructor
	2)cant declare object in case label	*/



#include<iostream>
#include<conio.h>
using namespace std;
class personType
{
	protected:
		int age;
		string Fname;
		string Lname;
	public:
		void setData()
		{
			cout<<"Enter Your First Name: "<<endl;
			cin>>Fname;
			cout<<"Enter Your Last Name: "<<endl;
			cin>>Lname;
			cout<<"Enter Your Age: "<<endl;
			cin>>age;
		}
		void print()
		{
			cout<<"Your First Name is :"<<Fname<<endl;
			cout<<"Your Last Name is: "<<Lname<<endl;
			cout<<"Your Age is: "<<age<<endl;
		}
		personType(int Age=0,char Fn='\0',char Ln='\0'):age(Age){
		};
		//personType(char Fn='\0'):Fname(N);
		//personType(char Ln='\0'):Lname(N);
};
class employeType:public personType
{
	private:
		double salary;
		string type;
		string status;
	public:
		void setData()
		{
		personType::setData();
		cout<<"Enter Your Salary: "<<endl;
		cin>>salary;
		cout<<"Enter Your Employe Type (Monthly) or Part-Time: "<<endl;
		cin>>type;
		cout<<"Enter Your Designation: "<<endl;
		cin>>status;
		}
		void print()
		{
			personType::print();
			cout<<"Your Salary is "<<salary<<endl;
			cout<<"Your Employee Type is "<<type<<endl;
			cout<<"Your Desination is :"<<status<<endl;
		}
		employeType(double sal=0.0):salary(sal){
		};
	
};
class studentType:public personType
{
	private:
		string degree;
		string uni_name;
		int roll_number;
	public:
		void setData()
		{
		personType::setData();
		cout<<"Enter Your Degree: "<<endl;
		cin>>degree;
		cout<<"Enter Your Uni Name: "<<endl;
		cin>>uni_name;
		cout<<"Enter Your Roll Number: "<<endl;
		cin>>roll_number;
		}
		void print()
		{
			personType::print();
			cout<<"Your Degree is "<<degree<<endl;
			cout<<"Your University Name is "<<uni_name<<endl;
			cout<<"Your Roll Number is :"<<roll_number<<endl;
		}
		studentType(int roll=0):roll_number(roll){
		};
		
};
int main()
{
	char choice;
	cout<<"Who are You? "<<endl;
	cout<<"Student(S) or Employee(E)"<<endl;
	cin>>choice;
	studentType student;
	employeType employee;
	switch(choice)
	{
		case('S'):
			
			student.setData();
			student.print();
			break;
		case('E'):
			
			employee.setData();
			employee.print();
			break;
	}
	getch();
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
			
			
			
		
	
	
	
	
	
	
	
	
	
	
	

