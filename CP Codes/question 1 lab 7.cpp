#include<iostream>
#include<conio.h>
using namespace std;
/////////////////////Class Employee/////////////////////////////////////////
class Employee
{
	public:
		
		Employee(string theName,float thePayRate);
		
		string getName()const;
		float getPayRate()const;
		string setName(string name);
		double setPayRate(double pay);
		float pay(float hoursWorked)const;
		bool setSalaried (bool flag);
	protected:
		string name;
		float payRate;
		
		
};
/********************employee methods***************************************/
string Employee::setName(string n)
{
	  name=n;
	return name;
}
double Employee::setPayRate(double pay)
{
	 payRate=pay;
}
bool Employee::setSalaried(bool flag)
{
	if(flag)
	return true;
	else
	return false;
}
Employee::Employee(string theName,float thePayRate)
{
	name=theName;
	payRate=thePayRate;
}
string Employee::getName()const
{
	return name;
}
float Employee::getPayRate()const
{
	return payRate;
}
float Employee::pay(float hoursWorked)const
{
	return hoursWorked*payRate;
}
/****************************Class Manager************************************/
class Manager:public Employee
{
	public:
		Manager(string theName,float thePayRate,bool isSalaried);
		bool getSalaried()const;
		float pay(float hoursWorked)const;
		void setSalaried(bool);
	protected:
		bool salaried;
};
//////////////////////////Member Methods of Manager/////////////////////////////
Manager::Manager(string theName,float thePayRate,bool isSalaried):Employee(theName,thePayRate)
{
	salaried=isSalaried;
}
void Manager::setSalaried(bool flag)
{
	salaried=flag;
}
bool Manager::getSalaried()const
{
	return salaried;
}
float Manager::pay(float hoursWorked)const
{
	if(salaried)
	return payRate;
	
	return Employee::pay(hoursWorked);
}
///////////////////////////Main Program////////////////////////////////////////
class Supervisor:public Employee
{
	public:
	
		string setDept(string Dept)
		{
			Department=Dept;
		}
		string getDept()
		{
			return Department;
		}
			Supervisor(string theName,double thePayRate,string Dept);
		private:
			string Department;
			bool salaried;
};
Supervisor::Supervisor(string theName,double thePayRate,string dept):Employee(theName,thePayRate)
{
	Department=dept;
}

int main()

{
	Employee empl("John Burke",25.0);
	Manager mgr("Jan Kovacs",1200.0,true);
	Supervisor sup("Denise Zephyr",780.0,"accounting");
	
	cout<<"For Employee: "<<endl;
	cout<<"Name: "<<empl.getName()<<endl;
	cout<<"Pay: "<<empl.pay(40.0)<<endl;
	
	cout<<"Changing Employee's Name...."<<endl;
	empl.setName("Doug Conners");
	cout<<"New Name :"<<empl.getName()<<endl;
	cout<<endl;
	
	
	cout<<"For Manager: "<<endl;
	cout<<"Name: "<<mgr.getName()<<endl;
	cout<<"Salaried: "<<mgr.getSalaried()<<endl;
	cout<<"Pay :"<<mgr.pay(40.0)<<endl;
	
	
	cout<<"Changing The Managers Salaried Status...."<<endl;
	mgr.setSalaried(false);
	cout<<"New Pay :"<<mgr.pay(40.0)<<endl;
	cout<<"Salaried: "<<mgr.getSalaried()<<endl;
	cout<<endl;
	
	
	
	cout<<"For Supervisor: "<<endl;
	cout<<"Name: "<<sup.getName()<<endl;
	cout<<"Dept: "<<sup.getDept()<<endl;
	cout<<"Pay :"<<sup.pay(40.0)<<endl;
	
	
	cout<<"Changing The Supervisors Pay Rate...."<<endl;
	sup.setPayRate(900.0);
	cout<<"New Pay :"<<sup.pay(40.0)<<endl;
	
	
	/*
	
	cout<<"Name: "<<mgr.getName()<<endl;
	cout<<"Pay : "<<mgr.pay(40.0)<<endl;
	
	Manager mgr2("John Burke",25.0,false);
	cout<<"Name: "<<mgr2.getName()<<endl;
	cout<<"Pay : "<<mgr2.pay(40.0)<<endl;
	*/
	getch();
}
